json.array!(@clientes) do |cliente|
  json.extract! cliente, :id, :nome, :email, :data_nascimento, :telefone01, :telefone02, :endereco, :bairro, :cidade
  json.url cliente_url(cliente, format: :json)
end
