/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface FTUserAcousticProfile : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const UserAcousticProfile* _root;

}

@property (nonatomic,readonly) NSString * acoustic_profile_version; 
@property (nonatomic,readonly) NSData * acoustic_profile_blob; 
@property (nonatomic,readonly) NSString * profile_checksum; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const UserAcousticProfile*)arg2 verify:(char)arg3 ;
-(Offset<siri::speech::schema_fb::UserAcousticProfile>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const UserAcousticProfile*)arg2 ;
-(NSString *)profile_checksum;
-(NSData *)acoustic_profile_blob;
-(NSString *)acoustic_profile_version;
-(void)acoustic_profile_blob:(/*^block*/id)arg1 ;
@end
