/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, NSCKExportMetadata, NSSet;

@interface NSCKExportOperation : NSManagedObject

@property (nonatomic,retain) NSNumber * statusNum; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSCKExportMetadata * exportMetadata; 
@property (assign,nonatomic) unsigned long long status; 
@property (nonatomic,retain) NSSet * objects; 
+(id)entityPath;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
@end
