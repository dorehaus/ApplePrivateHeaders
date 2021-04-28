/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/Versions/A/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, QSSMultiUserStartSpeechRequest, QSSUpdateAudioInfo, QSSSetRequestOrigin, QSSSetSpeechContext, QSSSetSpeechProfile, QSSSetEndpointerState, QSSAudioPacket, QSSFinishAudio, QSSResetServerEndpointer, QSSSetAlternateRecognitionSausage;

@interface QSSMultiUserStreamingRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const MultiUserStreamingRequest* _root;

}

@property (nonatomic,readonly) long long content_type; 
@property (nonatomic,readonly) QSSMultiUserStartSpeechRequest * contentAsQSSMultiUserStartSpeechRequest; 
@property (nonatomic,readonly) QSSUpdateAudioInfo * contentAsQSSUpdateAudioInfo; 
@property (nonatomic,readonly) QSSSetRequestOrigin * contentAsQSSSetRequestOrigin; 
@property (nonatomic,readonly) QSSSetSpeechContext * contentAsQSSSetSpeechContext; 
@property (nonatomic,readonly) QSSSetSpeechProfile * contentAsQSSSetSpeechProfile; 
@property (nonatomic,readonly) QSSSetEndpointerState * contentAsQSSSetEndpointerState; 
@property (nonatomic,readonly) QSSAudioPacket * contentAsQSSAudioPacket; 
@property (nonatomic,readonly) QSSFinishAudio * contentAsQSSFinishAudio; 
@property (nonatomic,readonly) QSSResetServerEndpointer * contentAsQSSResetServerEndpointer; 
@property (nonatomic,readonly) QSSSetAlternateRecognitionSausage * contentAsQSSSetAlternateRecognitionSausage; 
-(QSSAudioPacket *)contentAsQSSAudioPacket;
-(QSSFinishAudio *)contentAsQSSFinishAudio;
-(QSSUpdateAudioInfo *)contentAsQSSUpdateAudioInfo;
-(QSSSetRequestOrigin *)contentAsQSSSetRequestOrigin;
-(QSSSetSpeechContext *)contentAsQSSSetSpeechContext;
-(QSSSetSpeechProfile *)contentAsQSSSetSpeechProfile;
-(QSSSetEndpointerState *)contentAsQSSSetEndpointerState;
-(QSSResetServerEndpointer *)contentAsQSSResetServerEndpointer;
-(QSSSetAlternateRecognitionSausage *)contentAsQSSSetAlternateRecognitionSausage;
-(QSSMultiUserStartSpeechRequest *)contentAsQSSMultiUserStartSpeechRequest;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const MultiUserStreamingRequest*)arg2 verify:(char)arg3 ;
-(Offset<siri::speech::qss_fb::MultiUserStreamingRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const MultiUserStreamingRequest*)arg2 ;
-(long long)content_type;
@end
