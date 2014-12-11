class CreateClientes < ActiveRecord::Migration
  def change
    create_table :clientes do |t|
      t.string :nome
      t.string :email
      t.date :data_nascimento
      t.string :telefone01
      t.string :telefone02
      t.string :endereco
      t.string :bairro
      t.string :cidade

      t.timestamps
    end
  end
end
