/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ClassroomKit/ClassroomKit-Structs.h>
@class NSString;

@interface CRKFTSEntry : NSObject {

	NSString* _path;
	stat _stat;

}

@property (nonatomic,copy,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) stat stat;                         //@synthesize stat=_stat - In the implementation block
-(NSString *)path;
-(stat)stat;
-(id)initWithFTSEntry:(ftsent*)arg1 error:(id*)arg2 ;
-(id)errorForFTSEntry:(ftsent*)arg1 ;
@end

