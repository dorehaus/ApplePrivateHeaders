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

@class NSMutableDictionary, NSData, NSString, NSArray, QSSTextToSpeechRequestMeta, QSSTextToSpeechRequestContext, QSSTextToSpeechRequestExperiment, QSSTTSRequestFeatureFlags, QSSTextToSpeechRequestDebug, QSSTextToSpeechUserProfile;

@interface QSSTextToSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TextToSpeechRequest* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSString * gender; 
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) long long audio_type; 
@property (nonatomic,readonly) BOOL enable_word_timing_info; 
@property (nonatomic,readonly) NSString * voice_name; 
@property (nonatomic,readonly) NSArray * context_info; 
@property (nonatomic,readonly) long long preferred_voice_type; 
@property (nonatomic,readonly) QSSTextToSpeechRequestMeta * meta_info; 
@property (nonatomic,readonly) QSSTextToSpeechRequestContext * context; 
@property (nonatomic,readonly) QSSTextToSpeechRequestExperiment * experiment; 
@property (nonatomic,readonly) QSSTTSRequestFeatureFlags * feature_flags; 
@property (nonatomic,readonly) QSSTextToSpeechRequestDebug * debug; 
@property (nonatomic,readonly) QSSTextToSpeechUserProfile * profile; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(NSString *)gender;
-(QSSTextToSpeechRequestContext *)context;
-(NSString *)text;
-(QSSTextToSpeechRequestDebug *)debug;
-(QSSTextToSpeechUserProfile *)profile;
-(QSSTextToSpeechRequestExperiment *)experiment;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechRequest*)arg2 verify:(char)arg3 ;
-(Offset<siri::speech::schema_fb::TextToSpeechRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechRequest*)arg2 ;
-(NSString *)speech_id;
-(NSString *)session_id;
-(QSSTextToSpeechRequestMeta *)meta_info;
-(NSArray *)context_info;
-(long long)audio_type;
-(BOOL)enable_word_timing_info;
-(NSString *)voice_name;
-(long long)preferred_voice_type;
-(QSSTTSRequestFeatureFlags *)feature_flags;
@end

