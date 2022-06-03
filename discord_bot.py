import discord
import random
#import asyncio

TOKEN = "s"
CHANNEL_ID = "CHANNEL_ID"
client = discord.Client()

#bot起動完了時に実行される処理
@client.event
async def on_ready():
    channel = client.get_channel(CHANNEL_ID)
    print('ログイン成功')

#メッセージ受信時に実行される処理
@client.event
async def on_message(message):
    if message.author == client.user:
        return

    #受信したメッセージが"hey"だったとき"hello"を返す
    if message.content == "スロット":
        probability =random.randint(1,319)
        slot_list = [':emoji_1:', ':emoji_2:', ':emoji_3:',
                     ':emoji_4:', ':emoji_5:',':emoji_6:'
                     ,':emoji_7:''']
        A = random.choice(slot_list)
        B = random.choice(slot_list)
        C = random.choice(slot_list)
        if int(probability) ==int(1):
            await message.channel.send("ボーナス確定！！！")
            #await asyncio.sleep(3)
            await message.channel.send( ':emoji_8:'+':emoji_8:'+':emoji_8:')
        else:
            D = A+B+C
            await message.channel.send(D)
        if(A==B and B==C):
          await message.channel.send("大当たりー！！")
        #await message.channel.send('hello')

client.run(TOKEN)