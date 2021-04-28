/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPObject.h>

@class TSPDataMetadataMap, NSArray;

@interface TSPObjectSerializationMetadata : TSPObject {

	ObjectSerializationMetadata* _message;
	TSPDataMetadataMap* _identifierToDataMetadataMap;
	NSArray* _dataReferences;

}

@property (nonatomic,copy) NSArray * dataReferences;              //@synthesize dataReferences=_dataReferences - In the implementation block
-(id)initWithContext:(id)arg1 ;
-(ObjectSerializationMetadata*)message;
-(long long)tsp_identifier;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)setDataMetadata:(id)arg1 forDataIdentifier:(long long)arg2 ;
-(id)dataMetadataForDataIdentifier:(long long)arg1 ;
-(NSArray *)dataReferences;
-(void)setDataReferences:(NSArray *)arg1 ;
@end
