/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCMediaNegotiatorAudioConfiguration, VCVideoRuleCollections, NSDictionary, NSString, NSMutableSet, NSSet, NSMutableOrderedSet;

@interface VCMediaNegotiatorLocalConfiguration : NSObject <NSCopying> {

	unsigned _videoSSRC;
	VCMediaNegotiatorAudioConfiguration* _audioConfiguration;
	VCVideoRuleCollections* _videoRuleCollections;
	VCVideoRuleCollections* _screenRuleCollections;
	NSDictionary* _videoFeatureStrings;
	char _allowRTCPFB;
	char _isCaller;
	NSString* _basebandCodec;
	unsigned _basebandCodecSampleRate;
	NSMutableSet* _bandwidthConfigurations;
	NSSet* _captionsReceiverLanguages;
	NSSet* _captionsSenderLanguages;
	unsigned long long _creationTime;
	NSMutableOrderedSet* _multiwayAudioStreams;
	NSMutableOrderedSet* _multiwayVideoStreams;
	NSSet* _momentsVideoCodecs;
	NSSet* _momentsImageTypes;
	unsigned char _mediaControlInfoVersion;
	char _SIPDisabled;
	char _secureMessagingRequired;
	unsigned _faceTimeSwitches;
	int _preferredAudioCodec;
	int _deviceRole;
	void* _callLogFile;
	unsigned _tilesPerVideoFrame;
	char _oneToOneModeSupported;
	char _ltrpEnabled;
	NSSet* _pixelFormats;
	unsigned char _mediaControlInfoFECFeedbackVersion;
	unsigned char _linkProbingCapabilityVersion;
	char _alwaysOnAudRedEnabled;
	char _alwaysOnAudioRedundancyEnabled;
	char _highFecEnabled;
	char _lowFpsVideoEnabled;
	char _vplrFecEnabled;
	char _rampDownBWDropEnabled;
	char _fastMediaDuplicationEnabled;
	char _iRATRtpEnabled;
	char _preWarmCellEnabled;
	char _duplicateImportantPktsEnabled;
	unsigned _customVideoWidth;
	unsigned _customVideoHeight;

}

@property (assign,nonatomic) unsigned videoSSRC;                                                    //@synthesize videoSSRC=_videoSSRC - In the implementation block
@property (nonatomic,retain) VCMediaNegotiatorAudioConfiguration * audioConfiguration;              //@synthesize audioConfiguration=_audioConfiguration - In the implementation block
@property (nonatomic,retain) VCVideoRuleCollections * videoRuleCollections;                         //@synthesize videoRuleCollections=_videoRuleCollections - In the implementation block
@property (nonatomic,retain) VCVideoRuleCollections * screenRuleCollections;                        //@synthesize screenRuleCollections=_screenRuleCollections - In the implementation block
@property (assign,nonatomic) int preferredAudioCodec;                                               //@synthesize preferredAudioCodec=_preferredAudioCodec - In the implementation block
@property (assign,nonatomic) int deviceRole;                                                        //@synthesize deviceRole=_deviceRole - In the implementation block
@property (nonatomic,retain) NSDictionary * videoFeatureStrings;                                    //@synthesize videoFeatureStrings=_videoFeatureStrings - In the implementation block
@property (assign,nonatomic) char allowRTCPFB;                                                      //@synthesize allowRTCPFB=_allowRTCPFB - In the implementation block
@property (assign,nonatomic) char isCaller;                                                         //@synthesize isCaller=_isCaller - In the implementation block
@property (nonatomic,retain) NSString * basebandCodec;                                              //@synthesize basebandCodec=_basebandCodec - In the implementation block
@property (assign,nonatomic) unsigned basebandCodecSampleRate;                                      //@synthesize basebandCodecSampleRate=_basebandCodecSampleRate - In the implementation block
@property (nonatomic,retain) NSSet * bandwidthConfigurations;                                       //@synthesize bandwidthConfigurations=_bandwidthConfigurations - In the implementation block
@property (nonatomic,retain) NSSet * captionsSenderLanguages;                                       //@synthesize captionsSenderLanguages=_captionsSenderLanguages - In the implementation block
@property (nonatomic,retain) NSSet * captionsReceiverLanguages;                                     //@synthesize captionsReceiverLanguages=_captionsReceiverLanguages - In the implementation block
@property (assign,nonatomic) void* callLogFile;                                                     //@synthesize callLogFile=_callLogFile - In the implementation block
@property (assign,nonatomic) unsigned long long creationTime;                                       //@synthesize creationTime=_creationTime - In the implementation block
@property (assign,nonatomic) unsigned char mediaControlInfoVersion;                                 //@synthesize mediaControlInfoVersion=_mediaControlInfoVersion - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * multiwayAudioStreams;                            //@synthesize multiwayAudioStreams=_multiwayAudioStreams - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * multiwayVideoStreams;                            //@synthesize multiwayVideoStreams=_multiwayVideoStreams - In the implementation block
@property (nonatomic,retain) NSSet * momentsVideoCodecs;                                            //@synthesize momentsVideoCodecs=_momentsVideoCodecs - In the implementation block
@property (nonatomic,retain) NSSet * momentsImageTypes;                                             //@synthesize momentsImageTypes=_momentsImageTypes - In the implementation block
@property (assign,setter=IPDisabled,nonatomic) char SIPDisabled;                                    //@synthesize SIPDisabled=_SIPDisabled - In the implementation block
@property (assign,nonatomic) char secureMessagingRequired;                                          //@synthesize secureMessagingRequired=_secureMessagingRequired - In the implementation block
@property (assign,nonatomic) unsigned faceTimeSwitches;                                             //@synthesize faceTimeSwitches=_faceTimeSwitches - In the implementation block
@property (assign,nonatomic) unsigned customVideoWidth;                                             //@synthesize customVideoWidth=_customVideoWidth - In the implementation block
@property (assign,nonatomic) unsigned customVideoHeight;                                            //@synthesize customVideoHeight=_customVideoHeight - In the implementation block
@property (assign,nonatomic) char alwaysOnAudRedEnabled;                                            //@synthesize alwaysOnAudRedEnabled=_alwaysOnAudRedEnabled - In the implementation block
@property (assign,nonatomic) char alwaysOnAudioRedundancyEnabled;                                   //@synthesize alwaysOnAudioRedundancyEnabled=_alwaysOnAudioRedundancyEnabled - In the implementation block
@property (assign,nonatomic) char highFecEnabled;                                                   //@synthesize highFecEnabled=_highFecEnabled - In the implementation block
@property (assign,nonatomic) char lowFpsVideoEnabled;                                               //@synthesize lowFpsVideoEnabled=_lowFpsVideoEnabled - In the implementation block
@property (assign,nonatomic) char vplrFecEnabled;                                                   //@synthesize vplrFecEnabled=_vplrFecEnabled - In the implementation block
@property (assign,nonatomic) char rampDownBWDropEnabled;                                            //@synthesize rampDownBWDropEnabled=_rampDownBWDropEnabled - In the implementation block
@property (assign,nonatomic) char fastMediaDuplicationEnabled;                                      //@synthesize fastMediaDuplicationEnabled=_fastMediaDuplicationEnabled - In the implementation block
@property (assign,nonatomic) char iRATRtpEnabled;                                                   //@synthesize iRATRtpEnabled=_iRATRtpEnabled - In the implementation block
@property (assign,nonatomic) char preWarmCellEnabled;                                               //@synthesize preWarmCellEnabled=_preWarmCellEnabled - In the implementation block
@property (assign,nonatomic) char duplicateImportantPktsEnabled;                                    //@synthesize duplicateImportantPktsEnabled=_duplicateImportantPktsEnabled - In the implementation block
@property (assign,nonatomic) unsigned tilesPerVideoFrame;                                           //@synthesize tilesPerVideoFrame=_tilesPerVideoFrame - In the implementation block
@property (assign,nonatomic) char oneToOneModeSupported;                                            //@synthesize oneToOneModeSupported=_oneToOneModeSupported - In the implementation block
@property (assign,nonatomic) char ltrpEnabled;                                                      //@synthesize ltrpEnabled=_ltrpEnabled - In the implementation block
@property (nonatomic,retain) NSSet * pixelFormats;                                                  //@synthesize pixelFormats=_pixelFormats - In the implementation block
@property (assign,nonatomic) unsigned char mediaControlInfoFECFeedbackVersion;                      //@synthesize mediaControlInfoFECFeedbackVersion=_mediaControlInfoFECFeedbackVersion - In the implementation block
@property (assign,nonatomic) unsigned char linkProbingCapabilityVersion;                            //@synthesize linkProbingCapabilityVersion=_linkProbingCapabilityVersion - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)init;
-(unsigned long long)creationTime;
-(void)setCreationTime:(unsigned long long)arg1 ;
-(int)deviceRole;
-(void)setDeviceRole:(int)arg1 ;
-(unsigned char)mediaControlInfoFECFeedbackVersion;
-(void)setMediaControlInfoFECFeedbackVersion:(unsigned char)arg1 ;
-(void)setAlwaysOnAudioRedundancyEnabled:(char)arg1 ;
-(int)preferredAudioCodec;
-(char)allowRTCPFB;
-(void)setAllowRTCPFB:(char)arg1 ;
-(unsigned)basebandCodecSampleRate;
-(char)setupBandwidthConfigurationsWithArbiter:(id)arg1 ;
-(char)setupBandwidthExtensionConfiguration:(id)arg1 ;
-(void)setVideoSSRC:(unsigned)arg1 ;
-(void)setAudioConfiguration:(VCMediaNegotiatorAudioConfiguration *)arg1 ;
-(void)setVideoRuleCollections:(VCVideoRuleCollections *)arg1 ;
-(void)setScreenRuleCollections:(VCVideoRuleCollections *)arg1 ;
-(void)setPreferredAudioCodec:(int)arg1 ;
-(void)setVideoFeatureStrings:(NSDictionary *)arg1 ;
-(void)setIsCaller:(char)arg1 ;
-(void)setBasebandCodec:(NSString *)arg1 ;
-(void)setBasebandCodecSampleRate:(unsigned)arg1 ;
-(void)setBandwidthConfigurations:(NSSet *)arg1 ;
-(void)setCaptionsSenderLanguages:(NSSet *)arg1 ;
-(void)setCaptionsReceiverLanguages:(NSSet *)arg1 ;
-(void)setCallLogFile:(void*)arg1 ;
-(void)setMediaControlInfoVersion:(unsigned char)arg1 ;
-(void)setMultiwayAudioStreams:(NSMutableOrderedSet *)arg1 ;
-(void)setMultiwayVideoStreams:(NSMutableOrderedSet *)arg1 ;
-(void)setMomentsVideoCodecs:(NSSet *)arg1 ;
-(void)setMomentsImageTypes:(NSSet *)arg1 ;
-(void)setSIPDisabled:(char)arg1 ;
-(void)setSecureMessagingRequired:(char)arg1 ;
-(void)setFaceTimeSwitches:(unsigned)arg1 ;
-(void)setOneToOneModeSupported:(char)arg1 ;
-(void)setPixelFormats:(NSSet *)arg1 ;
-(void)setLinkProbingCapabilityVersion:(unsigned char)arg1 ;
-(VCVideoRuleCollections *)videoRuleCollections;
-(VCVideoRuleCollections *)screenRuleCollections;
-(NSDictionary *)videoFeatureStrings;
-(NSSet *)momentsImageTypes;
-(NSSet *)momentsVideoCodecs;
-(char)SIPDisabled;
-(char)secureMessagingRequired;
-(unsigned)faceTimeSwitches;
-(char)oneToOneModeSupported;
-(unsigned char)linkProbingCapabilityVersion;
-(unsigned)videoSSRC;
-(unsigned char)mediaControlInfoVersion;
-(NSString *)basebandCodec;
-(NSSet *)bandwidthConfigurations;
-(char)isCaller;
-(VCMediaNegotiatorAudioConfiguration *)audioConfiguration;
-(char)isEqualBandwidthConfigurations:(id)arg1 ;
-(NSMutableOrderedSet *)multiwayAudioStreams;
-(char)isEqualMultiwayAudioStreamSet:(id)arg1 ;
-(NSMutableOrderedSet *)multiwayVideoStreams;
-(char)isEqualMultiwayVideoStreamSet:(id)arg1 ;
-(char)isEqualFeatureStrings:(id)arg1 ;
-(char)isEqualMomentsImageTypes:(id)arg1 ;
-(char)isEqualMomentsVideoCodecs:(id)arg1 ;
-(char)isEqualFaceTimeSettings:(id)arg1 ;
-(id)initWithBitrateArbiter:(id)arg1 ;
-(void)addBandwidthConfiguration:(id)arg1 ;
-(void)addMultiwayAudioStream:(id)arg1 ;
-(void)addMultiwayVideoStream:(id)arg1 ;
-(NSSet *)captionsSenderLanguages;
-(NSSet *)captionsReceiverLanguages;
-(void*)callLogFile;
-(unsigned)customVideoWidth;
-(void)setCustomVideoWidth:(unsigned)arg1 ;
-(unsigned)customVideoHeight;
-(void)setCustomVideoHeight:(unsigned)arg1 ;
-(unsigned)tilesPerVideoFrame;
-(void)setTilesPerVideoFrame:(unsigned)arg1 ;
-(char)ltrpEnabled;
-(void)setLtrpEnabled:(char)arg1 ;
-(NSSet *)pixelFormats;
-(char)alwaysOnAudRedEnabled;
-(void)setAlwaysOnAudRedEnabled:(char)arg1 ;
-(char)alwaysOnAudioRedundancyEnabled;
-(char)highFecEnabled;
-(void)setHighFecEnabled:(char)arg1 ;
-(char)lowFpsVideoEnabled;
-(void)setLowFpsVideoEnabled:(char)arg1 ;
-(char)vplrFecEnabled;
-(void)setVplrFecEnabled:(char)arg1 ;
-(char)rampDownBWDropEnabled;
-(void)setRampDownBWDropEnabled:(char)arg1 ;
-(char)fastMediaDuplicationEnabled;
-(void)setFastMediaDuplicationEnabled:(char)arg1 ;
-(char)iRATRtpEnabled;
-(void)setIRATRtpEnabled:(char)arg1 ;
-(char)preWarmCellEnabled;
-(void)setPreWarmCellEnabled:(char)arg1 ;
-(char)duplicateImportantPktsEnabled;
-(void)setDuplicateImportantPktsEnabled:(char)arg1 ;
@end

