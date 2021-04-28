/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Versions/A/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ML3MigrationAddedColumn : NSObject {

	NSString* _columnName;
	NSString* _foreignTableName;
	NSString* _foreignColumnName;
	NSString* _joinColumnName;

}

@property (nonatomic,readonly) NSString * columnName;                          //@synthesize columnName=_columnName - In the implementation block
@property (nonatomic,readonly) NSString * foreignTableName;                    //@synthesize foreignTableName=_foreignTableName - In the implementation block
@property (nonatomic,readonly) NSString * foreignColumnName;                   //@synthesize foreignColumnName=_foreignColumnName - In the implementation block
@property (nonatomic,readonly) NSString * joinColumnName;                      //@synthesize joinColumnName=_joinColumnName - In the implementation block
@property (nonatomic,readonly) char shouldImportFromForeignTable; 
-(NSString *)columnName;
-(id)initWithName:(id)arg1 foreignTable:(id)arg2 foreignColumn:(id)arg3 joinColumn:(id)arg4 ;
-(char)shouldImportFromForeignTable;
-(NSString *)joinColumnName;
-(NSString *)foreignTableName;
-(NSString *)foreignColumnName;
@end

