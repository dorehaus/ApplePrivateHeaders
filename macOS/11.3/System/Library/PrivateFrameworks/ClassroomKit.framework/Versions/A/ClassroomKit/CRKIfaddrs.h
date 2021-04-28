/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ClassroomKit/ClassroomKit-Structs.h>
@class NSString;

@interface CRKIfaddrs : NSObject {

	ifaddrs* mIfaddrs;

}

@property (getter=isInternetInterface,nonatomic,readonly) char internetInterface; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * IPAddress; 
@property (nonatomic,readonly) CRKIfaddrs * next; 
-(NSString *)name;
-(CRKIfaddrs *)next;
-(NSString *)IPAddress;
-(id)initWithIfaddrs:(ifaddrs*)arg1 ;
-(char)isInternetInterface;
@end

