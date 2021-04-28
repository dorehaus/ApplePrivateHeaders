/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/Versions/A/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@class NSArray, NSDictionary, BWNodeOutput;

@interface BWStillImageBufferRouterNode : BWNode {

	char _usingBravoDevice;
	char _usingPearlDevice;
	char _HDRSupported;
	char _SISSupported;
	char _GNRSISSupported;
	char _LTMHDRSupported;
	NSArray* _inputPortTypes;
	NSDictionary* _portTypeToInput;
	BWNodeOutput* _defaultOutput;
	BWNodeOutput* _HDROutput;
	BWNodeOutput* _SISOutput;
	BWNodeOutput* _bravoTelephotoOutput;
	BWNodeOutput* _pearlInfraredOutput;

}

@property (nonatomic,readonly) BWNodeOutput * defaultOutput;                          //@synthesize defaultOutput=_defaultOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * HDROutput;                              //@synthesize HDROutput=_HDROutput - In the implementation block
@property (setter=ISOutput,nonatomic,readonly) BWNodeOutput * SISOutput;              //@synthesize SISOutput=_SISOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * bravoTelephotoOutput;                   //@synthesize bravoTelephotoOutput=_bravoTelephotoOutput - In the implementation block
@property (nonatomic,readonly) BWNodeOutput * pearlInfraredOutput;                    //@synthesize pearlInfraredOutput=_pearlInfraredOutput - In the implementation block
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)inputForPortType:(id)arg1 ;
-(id)initWithInputPortTypes:(id)arg1 HDRSupported:(char)arg2 SISSupported:(char)arg3 GNRSISSupported:(char)arg4 LTMHDRSupported:(char)arg5 depthDataDeliveryEnabled:(char)arg6 ;
-(BWNodeOutput *)defaultOutput;
-(BWNodeOutput *)bravoTelephotoOutput;
-(BWNodeOutput *)pearlInfraredOutput;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)_outputForInput:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 metadata:(id)arg3 ;
-(id)_defaultOutputsForInput:(id)arg1 ;
-(void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2 ;
-(void)handleStillImagePrewarmWithSettings:(id)arg1 forInput:(id)arg2 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(BWNodeOutput *)HDROutput;
-(BWNodeOutput *)SISOutput;
@end

