/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAWLAddContentToWatchList : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * canonicalId; 
+(id)addContentToWatchList;
+(id)addContentToWatchListWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSString *)canonicalId;
-(void)setCanonicalId:(NSString *)arg1 ;
@end

