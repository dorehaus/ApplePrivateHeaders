/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_PFAncillaryModelFactory.h>

@class NSString;

@interface PFCloudKitMetadataModel : NSObject <_PFAncillaryModelFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ancillaryModelNamespace;
+(id)newMetadataModelForFrameworkVersion:(id)arg1 ;
+(unsigned long long)ancillaryEntityOffset;
+(id)_newMetadataModelV1;
+(id)_newMetadataModelV2;
+(id)_newMetadataModelV3;
+(id)_newMetadataModelV4;
+(id)_newMetadataModelV5;
+(id)_newMetadataModelV6;
+(id)_newMetadataModelV7;
+(id)_newMetadataModelV8;
+(id)_newMetadataModelV9;
+(id)_newMetadataModelV10;
+(id)allMetadataModels;
+(char)doesMetadataModel:(id)arg1 matchConnection:(id)arg2 hasOldMetadataTables:(char*)arg3 ;
+(void)_invalidateStaticCaches;
+(char)checkAndRepairSchemaOfStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3 ;
+(char)currentMetadataVersionHashesMatchCachedMetadataVersionHashes:(id)arg1 ;
+(id)identifyModelForStore:(id)arg1 withConnection:(id)arg2 hasOldMetadataTables:(char*)arg3 ;
+(unsigned long long)ancillaryEntityCount;
+(void)initialize;
@end

