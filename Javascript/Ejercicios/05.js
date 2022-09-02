const tipoDeSuscripcion = "Basic";
const tipoSuscripcion = [{
        tipo: "Free",
        descripcion: "Solo puedes tomar los cursos gratis"
    },{
        tipo: "Basic",
        descripcion: "Puedes tomar casi todos los cursos durante un mes"
    },{
        tipo: "Expert",
        descripcion: "Puedes tomar casi todos los cursos durante un año"
    },{
        tipo: "ExpertPlus",
        descripcion: "Tú y alguien más pueden tomar todos los cursos durante un año"
    }
]
const resultado = tipoSuscripcion.find(function(tipoSuscripcion){
    if(tipoSuscripcion.tipo === tipoDeSuscripcion){
        console.log(tipoSuscripcion.descripcion);
    }
});