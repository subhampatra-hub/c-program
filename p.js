const addDocumentForm = document.getElementById('addDocumentForm');
const documentList = document.getElementById('documentList');
const successMessage = document.getElementById('successMessage');

const documents = [];

addDocumentForm.addEventListener('submit', function(event) {
    event.preventDefault();

    const documentName = document.getElementById('documentName').value;
    const documentContent = document.getElementById('documentContent').value;

    const document = {
        name: documentName,
        content: documentContent
    };

    documents.push(document);
    renderDocumentList();

    // Show success message
    successMessage.style.display = 'block';

    // Hide success message after 3 seconds
    setTimeout(() => {
        successMessage.style.display = 'none';
    }, 3000);

    addDocumentForm.reset();
});

function renderDocumentList() {
    documentList.innerHTML = '';

    documents.forEach((doc, index) => {
        const documentItem = document.createElement('div');
        documentItem.classList.add('document-item');
        documentItem.innerHTML = `
            <h3>${doc.name}</h3>
            <p>${doc.content}</p>
            <button onclick="deleteDocument(${index})">Delete</button>
        `;
        documentList.appendChild(documentItem);
    });
}

function deleteDocument(index) {
    documents.splice(index, 1);
    renderDocumentList();
}