/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/Versions/A/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BoardServices/BoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BSXPCServiceConnectionContext : NSObject <NSCopying> {

	NSString* _proem;

}

@property (nonatomic,copy,readonly) NSString * endpointDescription; 
@property (getter=isServer,nonatomic,readonly) char server; 
@property (getter=isClient,nonatomic,readonly) char client; 
@property (getter=isRoot,nonatomic,readonly) char root; 
@property (getter=isChild,nonatomic,readonly) char child; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(char)isServer;
-(char)isClient;
-(char)isChild;
-(NSString *)endpointDescription;
-(char)isRoot;
@end
