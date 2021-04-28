/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSString, NSNumber, NSData, NSDictionary;

@interface WFMediaItemDescriptor : MTLModel <NSSecureCoding, MTLJSONSerializing> {

	NSString* _itemName;
	NSNumber* _persistentIdentifier;
	NSData* _playbackArchiveData;
	NSString* _type;

}

@property (nonatomic,copy,readonly) NSString * itemName;                          //@synthesize itemName=_itemName - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * persistentIdentifier;              //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * playbackArchiveData;                 //@synthesize playbackArchiveData=_playbackArchiveData - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(id)playbackArchiveDataJSONTransformer;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)type;
-(NSString *)itemName;
-(NSNumber *)persistentIdentifier;
-(id)initWithMediaItemName:(id)arg1 persistentIdentifier:(id)arg2 mediaType:(id)arg3 ;
-(id)initWithMediaItemName:(id)arg1 playbackArchiveData:(id)arg2 ;
-(NSData *)playbackArchiveData;
@end

