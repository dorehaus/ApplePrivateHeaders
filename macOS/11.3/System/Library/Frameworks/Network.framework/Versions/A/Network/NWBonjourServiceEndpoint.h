/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Network.framework/Versions/A/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/NWEndpoint.h>

@class NSString;

@interface NWBonjourServiceEndpoint : NWEndpoint

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSString * domain; 
+(unsigned)endpointType;
+(id)endpointWithName:(id)arg1 type:(id)arg2 domain:(id)arg3 ;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(char)arg2 ;
-(NSString *)name;
-(NSString *)domain;
-(NSString *)type;
@end

