/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SystemMigration/SystemMigration-Structs.h>
@class DMManager;

@interface SMDMManager : NSObject {

	DMManager* _dm;
	DASessionRef _daSession;

}
+(void)initialize;
+(id)sharedSMDMManager;
-(id)init;
-(id)manager;
-(void)tearDown;
-(DASessionRef)daSession;
-(DADiskRef)copyDiskForDiskIdentifier:(id)arg1 ;
@end
