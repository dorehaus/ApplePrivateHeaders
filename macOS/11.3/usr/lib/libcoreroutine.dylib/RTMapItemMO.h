/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTCloudManagedObject.h>

@class RTMapItemExtendedAttributesMO, NSData, NSNumber, RTAddressMO, NSString, RTLearnedPlaceMO, NSUUID;

@interface RTMapItemMO : RTCloudManagedObject {

	RTMapItemExtendedAttributesMO* cachedExtendedAttributes;

}

@property (nonatomic,retain) NSData * geoMapItemHandle; 
@property (nonatomic,copy) NSNumber * mapItemSource; 
@property (nonatomic,retain) RTAddressMO * address; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSNumber * latitude; 
@property (nonatomic,copy) NSNumber * longitude; 
@property (nonatomic,copy) NSNumber * uncertainty; 
@property (nonatomic,copy) NSNumber * referenceFrame; 
@property (nonatomic,copy) NSNumber * muid; 
@property (nonatomic,copy) NSNumber * resultProviderID; 
@property (nonatomic,retain) RTLearnedPlaceMO * place; 
@property (nonatomic,copy) NSUUID * extendedAttributesIdentifier; 
@property (nonatomic,copy) NSString * displayLanguage; 
@property (assign,nonatomic) char disputed; 
@property (nonatomic,retain) RTMapItemExtendedAttributesMO * cachedExtendedAttributes; 
+(id)fetchRequest;
+(id)managedObjectWithMapItem:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)managedObjectWithMapItem:(id)arg1 managedObject:(id)arg2 inManagedObjectContext:(id)arg3 ;
-(id)extendedAttributes;
-(void)setExtendedAttributes:(id)arg1 ;
-(RTMapItemExtendedAttributesMO *)cachedExtendedAttributes;
-(void)setCachedExtendedAttributes:(RTMapItemExtendedAttributesMO *)arg1 ;
-(void)didSave;
@end

