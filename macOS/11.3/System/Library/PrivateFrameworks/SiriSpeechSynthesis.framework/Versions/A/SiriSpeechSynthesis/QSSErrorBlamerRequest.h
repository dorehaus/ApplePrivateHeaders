/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/Versions/A/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, QSSStartSpeechRequest, NSArray, NSString, QSSUserLanguageProfile, QSSUserAcousticProfile;

@interface QSSErrorBlamerRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const ErrorBlamerRequest* _root;

}

@property (nonatomic,readonly) QSSStartSpeechRequest * start_speech_request; 
@property (nonatomic,readonly) NSArray * contextual_text; 
@property (nonatomic,readonly) NSString * left_context; 
@property (nonatomic,readonly) NSString * right_context; 
@property (nonatomic,readonly) QSSUserLanguageProfile * user_language_profile; 
@property (nonatomic,readonly) QSSUserAcousticProfile * user_acoustic_profile; 
@property (nonatomic,readonly) double latitude; 
@property (nonatomic,readonly) double longitude; 
@property (nonatomic,readonly) NSArray * audio_packets; 
@property (nonatomic,readonly) NSString * ref_transcript; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)latitude;
-(double)longitude;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const ErrorBlamerRequest*)arg2 verify:(char)arg3 ;
-(Offset<siri::speech::schema_fb::ErrorBlamerRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const ErrorBlamerRequest*)arg2 ;
-(QSSStartSpeechRequest *)start_speech_request;
-(NSArray *)contextual_text;
-(NSString *)left_context;
-(NSString *)right_context;
-(QSSUserLanguageProfile *)user_language_profile;
-(QSSUserAcousticProfile *)user_acoustic_profile;
-(NSArray *)audio_packets;
-(NSString *)ref_transcript;
@end

