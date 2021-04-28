/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAKnowledgeDeleteValueForKey : SABaseClientBoundCommand <SAAceSerializable>

@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * storeName; 
@property (nonatomic,copy) NSString * storeType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)deleteValueForKey;
+(id)deleteValueForKeyWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setStoreName:(NSString *)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)storeName;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSString *)storeType;
-(void)setStoreType:(NSString *)arg1 ;
@end

