/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCMediaStreamConfig.h>

@class NSMutableDictionary, NSString, NSDictionary;

@interface VCVideoStreamConfig : VCMediaStreamConfig {

	long long _videoResolution;
	unsigned long long _framerate;
	unsigned long long _txMaxBitrate;
	unsigned long long _txMinBitrate;
	unsigned long long _txInitialBitrate;
	unsigned long long _rxMaxBitrate;
	unsigned long long _rxMinBitrate;
	unsigned long long _keyFrameInterval;
	int _remoteVideoInitialOrientation;
	char _enableCVO;
	unsigned long long _cvoExtensionID;
	char _isVideoProtected;
	long long _type;
	unsigned long long _sourceFramerate;
	int _encodingMode;
	AC* _videoPriorityPointer;
	int _captureSource;
	unsigned _screenDisplayID;
	unsigned long long _customWidth;
	unsigned long long _customHeight;
	NSMutableDictionary* _rxCodecFeatureListStrings;
	NSMutableDictionary* _txCodecFeatureListStrings;
	unsigned long long _tilesPerFrame;
	unsigned _pixelFormat;
	char _ltrpEnabled;
	int _hdrMode;
	NSString* _remoteDeviceName;

}

@property (assign,nonatomic) long long videoResolution;                               //@synthesize videoResolution=_videoResolution - In the implementation block
@property (assign,nonatomic) unsigned long long framerate;                            //@synthesize framerate=_framerate - In the implementation block
@property (assign,nonatomic) unsigned long long txMaxBitrate;                         //@synthesize txMaxBitrate=_txMaxBitrate - In the implementation block
@property (assign,nonatomic) unsigned long long txMinBitrate;                         //@synthesize txMinBitrate=_txMinBitrate - In the implementation block
@property (assign,nonatomic) unsigned long long txInitialBitrate;                     //@synthesize txInitialBitrate=_txInitialBitrate - In the implementation block
@property (assign,nonatomic) unsigned long long rxMaxBitrate;                         //@synthesize rxMaxBitrate=_rxMaxBitrate - In the implementation block
@property (assign,nonatomic) unsigned long long rxMinBitrate;                         //@synthesize rxMinBitrate=_rxMinBitrate - In the implementation block
@property (nonatomic,readonly) NSDictionary * rxCodecFeatureListStrings;              //@synthesize rxCodecFeatureListStrings=_rxCodecFeatureListStrings - In the implementation block
@property (nonatomic,readonly) NSDictionary * txCodecFeatureListStrings;              //@synthesize txCodecFeatureListStrings=_txCodecFeatureListStrings - In the implementation block
@property (assign,nonatomic) unsigned long long keyFrameInterval;                     //@synthesize keyFrameInterval=_keyFrameInterval - In the implementation block
@property (assign,nonatomic) int remoteVideoInitialOrientation;                       //@synthesize remoteVideoInitialOrientation=_remoteVideoInitialOrientation - In the implementation block
@property (assign,nonatomic) char enableCVO;                                          //@synthesize enableCVO=_enableCVO - In the implementation block
@property (assign,nonatomic) unsigned long long cvoExtensionID;                       //@synthesize cvoExtensionID=_cvoExtensionID - In the implementation block
@property (assign,nonatomic) char isVideoProtected;                                   //@synthesize isVideoProtected=_isVideoProtected - In the implementation block
@property (assign,nonatomic) long long type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long sourceFramerate;                      //@synthesize sourceFramerate=_sourceFramerate - In the implementation block
@property (assign,nonatomic) int encodingMode;                                        //@synthesize encodingMode=_encodingMode - In the implementation block
@property (assign,nonatomic) AC* videoPriorityPointer;                                //@synthesize videoPriorityPointer=_videoPriorityPointer - In the implementation block
@property (assign,nonatomic) int captureSource;                                       //@synthesize captureSource=_captureSource - In the implementation block
@property (assign,nonatomic) unsigned screenDisplayID;                                //@synthesize screenDisplayID=_screenDisplayID - In the implementation block
@property (assign,nonatomic) unsigned long long customWidth;                          //@synthesize customWidth=_customWidth - In the implementation block
@property (assign,nonatomic) unsigned long long customHeight;                         //@synthesize customHeight=_customHeight - In the implementation block
@property (assign,nonatomic) unsigned long long tilesPerFrame;                        //@synthesize tilesPerFrame=_tilesPerFrame - In the implementation block
@property (assign,nonatomic) unsigned pixelFormat;                                    //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign,nonatomic) char ltrpEnabled;                                        //@synthesize ltrpEnabled=_ltrpEnabled - In the implementation block
@property (assign,nonatomic) int hdrMode;                                             //@synthesize hdrMode=_hdrMode - In the implementation block
@property (nonatomic,retain) NSString * remoteDeviceName;                             //@synthesize remoteDeviceName=_remoteDeviceName - In the implementation block
+(char)validateClientDictionary:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setPixelFormat:(unsigned)arg1 ;
-(unsigned)pixelFormat;
-(int)hdrMode;
-(void)setHdrMode:(int)arg1 ;
-(int)captureSource;
-(unsigned long long)framerate;
-(void)setFramerate:(unsigned long long)arg1 ;
-(unsigned long long)keyFrameInterval;
-(void)setKeyFrameInterval:(unsigned long long)arg1 ;
-(unsigned long long)tilesPerFrame;
-(void)setTilesPerFrame:(unsigned long long)arg1 ;
-(unsigned long long)txMinBitrate;
-(void)setTxMinBitrate:(unsigned long long)arg1 ;
-(unsigned long long)txMaxBitrate;
-(void)setTxMaxBitrate:(unsigned long long)arg1 ;
-(long long)videoResolution;
-(unsigned long long)customWidth;
-(id)initWithClientDictionary:(id)arg1 ;
-(char)updateWithClientDictionary:(id)arg1 ;
-(unsigned long long)customHeight;
-(char)enableCVO;
-(unsigned long long)cvoExtensionID;
-(void)setEncodingMode:(int)arg1 ;
-(char)ltrpEnabled;
-(void)setLtrpEnabled:(char)arg1 ;
-(void)setVideoResolution:(long long)arg1 ;
-(void)setSourceFramerate:(unsigned long long)arg1 ;
-(void)setRemoteVideoInitialOrientation:(int)arg1 ;
-(void)setRxMinBitrate:(unsigned long long)arg1 ;
-(void)setRxMaxBitrate:(unsigned long long)arg1 ;
-(int)encodingMode;
-(AC*)videoPriorityPointer:(SEL)arg1 ;
-(void)addRxCodecFeatureListString:(id)arg1 codecType:(long long)arg2 ;
-(void)addTxCodecFeatureListString:(id)arg1 codecType:(long long)arg2 ;
-(void)setVideoPriorityPointer:(A*)arg1 :(unsigned char)arg2 ;
-(void)setCvoExtensionID:(unsigned long long)arg1 ;
-(void)setEnableCVO:(char)arg1 ;
-(void)setCustomWidth:(unsigned long long)arg1 ;
-(void)setCustomHeight:(unsigned long long)arg1 ;
-(unsigned long long)sourceFramerate;
-(char)applyVideoStreamClientDictionary:(id)arg1 ;
-(unsigned long long)txInitialBitrate;
-(void)setTxInitialBitrate:(unsigned long long)arg1 ;
-(unsigned long long)rxMinBitrate;
-(unsigned long long)rxMaxBitrate;
-(NSDictionary *)rxCodecFeatureListStrings;
-(NSDictionary *)txCodecFeatureListStrings;
-(int)remoteVideoInitialOrientation;
-(char)isVideoProtected;
-(void)setIsVideoProtected:(char)arg1 ;
-(void)setCaptureSource:(int)arg1 ;
-(unsigned)screenDisplayID;
-(void)setScreenDisplayID:(unsigned)arg1 ;
-(NSString *)remoteDeviceName;
-(void)setRemoteDeviceName:(NSString *)arg1 ;
@end

