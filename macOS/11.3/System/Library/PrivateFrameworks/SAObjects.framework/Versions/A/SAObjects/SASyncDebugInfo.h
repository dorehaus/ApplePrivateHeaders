/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, SASyncAnchor, NSString;

@interface SASyncDebugInfo : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * objectIds; 
@property (nonatomic,retain) SASyncAnchor * syncAnchor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)debugInfo;
+(id)debugInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SASyncAnchor *)syncAnchor;
-(void)setSyncAnchor:(SASyncAnchor *)arg1 ;
-(id)encodedClassName;
-(NSArray *)objectIds;
-(void)setObjectIds:(NSArray *)arg1 ;
@end

