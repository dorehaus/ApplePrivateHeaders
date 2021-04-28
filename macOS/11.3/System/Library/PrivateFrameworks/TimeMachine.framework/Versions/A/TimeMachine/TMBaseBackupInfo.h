/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TimeMachine.framework/Versions/A/TimeMachine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSURL;

@interface TMBaseBackupInfo : NSObject {

	NSString* _name;
	NSDate* _dateCompleted;
	NSURL* _expectedBackupURL;

}

@property (readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (readonly) NSDate * dateCompleted;                 //@synthesize dateCompleted=_dateCompleted - In the implementation block
@property (readonly) NSURL * expectedBackupURL;              //@synthesize expectedBackupURL=_expectedBackupURL - In the implementation block
-(NSString *)name;
-(NSDate *)dateCompleted;
-(NSURL *)expectedBackupURL;
-(id)initWithName:(id)arg1 date:(id)arg2 expectedBackupURL:(id)arg3 ;
-(id)initWithBackupURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithDisk:(id)arg1 error:(id*)arg2 ;
@end
