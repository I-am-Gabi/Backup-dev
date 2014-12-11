json.array!(@servicos) do |servico|
  json.extract! servico, :id, :nome, :valor, :descricao, :obs
  json.url servico_url(servico, format: :json)
end
