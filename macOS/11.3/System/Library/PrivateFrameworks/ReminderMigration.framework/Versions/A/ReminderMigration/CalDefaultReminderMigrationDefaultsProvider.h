/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/Versions/A/ReminderMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CalReminderMigrationDefaultsProvider.h>

@class NSString;

@interface CalDefaultReminderMigrationDefaultsProvider : NSObject <CalReminderMigrationDefaultsProvider>

@property (nonatomic,readonly) NSString * defaultReminderListIdentifier; 
@property (nonatomic,readonly) char shouldBackupBeforeMigration; 
@property (assign,nonatomic) char havePerformedReminderMigrationCleanup; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setRemindersHaveBeenMigratedAndDeleteCalendarCache:(char)arg1 ;
-(NSString *)defaultReminderListIdentifier;
-(char)shouldBackupBeforeMigration;
-(char)havePerformedReminderMigrationCleanup;
-(void)setHavePerformedReminderMigrationCleanup:(char)arg1 ;
@end

