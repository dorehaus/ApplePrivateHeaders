/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/Versions/A/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMigrationManager, NSURL, NSString;

@interface CoreThemeDefinitionMigrator : NSObject {

	NSMigrationManager* _migrationManager;
	NSURL* _documentURL;
	long long _oldVersion;
	long long _newVersion;
	NSString* temporaryMigrationPath;

}

@property (copy) NSString * temporaryMigrationPath; 
-(void)dealloc;
-(id)initWithURL:(id)arg1 oldVersion:(long long)arg2 newVersion:(long long)arg3 ;
-(char)migrateWithError:(id*)arg1 ;
-(NSString *)temporaryMigrationPath;
-(void)setTemporaryMigrationPath:(NSString *)arg1 ;
-(char)_checkDiskSpace:(id*)arg1 ;
-(id)mappingModelForMigrationWithError:(id*)arg1 ;
-(char)_updateMetadata:(id*)arg1 ;
@end
