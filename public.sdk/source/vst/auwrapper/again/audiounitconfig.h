//------------------------------------------------------------------------
// Project     : VST SDK
// Version     : 3.5.1
//
// Category    : Helpers
// Filename    : public.sdk/source/vst/auwrapper/again/audiounitconfig.h
// Created by  : Steinberg, 12/2007
// Description : VST3 -> AU Wrapper
//
//-----------------------------------------------------------------------------
// LICENSE
// (c) 2012, Steinberg Media Technologies GmbH, All Rights Reserved
//-----------------------------------------------------------------------------
// This Software Development Kit may not be distributed in parts or its entirety  
// without prior written agreement by Steinberg Media Technologies GmbH. 
// This SDK must not be used to re-engineer or manipulate any technology used  
// in any Steinberg or Third-party application or software module, 
// unless permitted by law.
// Neither the name of the Steinberg Media Technologies nor the names of its
// contributors may be used to endorse or promote products derived from this 
// software without specific prior written permission.
// 
// THIS SDK IS PROVIDED BY STEINBERG MEDIA TECHNOLOGIES GMBH "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL STEINBERG MEDIA TECHNOLOGIES GMBH BE LIABLE FOR ANY DIRECT, 
// INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, 
// BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
// LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE 
// OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
// OF THE POSSIBILITY OF SUCH DAMAGE.
//----------------------------------------------------------------------------------

// AUWRAPPER_CHANGE

#define kAudioUnitVersion			0xFFFFFFFF							// Version Number, needs to be in hex
#define kAudioUnitName				"Steinberg: AGain"					// Company Name + Effect Name
#define kAudioUnitDescription		"AGain"								// Effect Description
#define kAudioUnitType				kAudioUnitType_Effect				// can be kAudioUnitType_Effect, kAudioUnitType_MusicEffect or kAudioUnitType_MusicDevice
#define kAudioUnitComponentSubType	'gain'								// unique id 
#define kAudioUnitComponentManuf	'Stbg'								// registered company id
#define kAudioUnitCarbonView		1									// if 0 no Carbon view support will be added

// custom bundle identifier
#define kAudioUnitBundleIdentifier	com.steinberg.vst3plugin.again.audiounit
