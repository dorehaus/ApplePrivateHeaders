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

@class NSMutableDictionary, NSData, NSString, QSSUserLanguageProfile;

@interface QSSCreateLanguageProfileResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const CreateLanguageProfileResponse* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) int error_code; 
@property (nonatomic,readonly) NSString * error_str; 
@property (nonatomic,readonly) QSSUserLanguageProfile * user_language_profile; 
@property (nonatomic,readonly) BOOL incomplete_profile; 
@property (nonatomic,readonly) BOOL recreate_apg_prons; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const CreateLanguageProfileResponse*)arg2 verify:(char)arg3 ;
-(Offset<siri::speech::schema_fb::CreateLanguageProfileResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const CreateLanguageProfileResponse*)arg2 ;
-(NSString *)speech_id;
-(int)error_code;
-(NSString *)error_str;
-(NSString *)session_id;
-(QSSUserLanguageProfile *)user_language_profile;
-(BOOL)incomplete_profile;
-(BOOL)recreate_apg_prons;
@end

