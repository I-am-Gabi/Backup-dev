class CreateServicos < ActiveRecord::Migration
  def change
    create_table :servicos do |t|
      t.string :nome
      t.float :valor
      t.text :descricao
      t.text :obs

      t.timestamps
    end
  end
end
