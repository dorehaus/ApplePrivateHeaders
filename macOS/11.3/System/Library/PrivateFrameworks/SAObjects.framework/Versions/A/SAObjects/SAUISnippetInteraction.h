/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SAUISnippetInteraction : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * requestId; 
@property (nonatomic,copy) NSString * snippetId; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)snippetInteraction;
+(id)snippetInteractionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setRequestId:(NSString *)arg1 ;
-(NSString *)requestId;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSString *)snippetId;
-(void)setSnippetId:(NSString *)arg1 ;
@end

