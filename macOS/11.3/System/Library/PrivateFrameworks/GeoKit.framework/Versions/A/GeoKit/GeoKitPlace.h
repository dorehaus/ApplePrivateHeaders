/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoKit.framework/Versions/A/GeoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoKit/GeoKit-Structs.h>
#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString, NSSet;

@interface GeoKitPlace : NSManagedObject

@property (nonatomic,retain) NSNumber * longitude; 
@property (nonatomic,retain) NSNumber * geonameid; 
@property (nonatomic,retain) NSNumber * population; 
@property (nonatomic,retain) NSNumber * latitude; 
@property (nonatomic,retain) NSNumber * embargo; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSSet * localizedNames; 
+(id)populationSortDescriptor;
+(id)arrayWithPopulationSortDescriptor;
-(id)displayName;
-(id)_displayNameWithSelector:(SEL)arg1 ;
-(char)isEqualToPlace:(id)arg1 ;
-(CGPoint)longLatPoint;
-(id)localizedNamesDumpDictionary;
@end

