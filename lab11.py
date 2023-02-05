import json
import urllib.request
import spotipy
from spotipy.oauth2 import SpotifyClientCredentials

sp = spotipy.Spotify(auth_manager=SpotifyClientCredentials(client_id='08075798f5a440fdaf82d1d3bfdbfdc3',
                                                           client_secret='6fd14b534cb44062ac7402d128a07df9'))

deta = urllib.request.urlopen('https://j72ajh.deta.dev/spotify_id').read().decode()
user = json.loads(deta)
track = sp.track(user['spotify_id'])

print('track  :', track['name'])
print('artists: ', end = '')
for artist in track['artists']:
    print(artist['name'], end = '  ')
print()
print('album  :', track['album']['name'])
print('link   :', track['external_urls']['spotify'])

