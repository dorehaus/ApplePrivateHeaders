/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Versions/A/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSSet;

@interface CPLDiffTracker : NSObject {

	NSMutableSet* _differingProperties;
	char _shouldCompareAllProperties;
	char _objectsAreTotallyDifferent;

}

@property (assign,nonatomic) char shouldCompareAllProperties;                //@synthesize shouldCompareAllProperties=_shouldCompareAllProperties - In the implementation block
@property (nonatomic,readonly) char objectsAreTotallyDifferent;              //@synthesize objectsAreTotallyDifferent=_objectsAreTotallyDifferent - In the implementation block
@property (nonatomic,readonly) NSSet * differingProperties;                  //@synthesize differingProperties=_differingProperties - In the implementation block
-(id)description;
-(id)redactedDescription;
-(void)noteObjectAreTotallyDifferent;
-(void)noteObjectsDifferOnProperty:(id)arg1 ;
-(char)areObjectsDifferentOnProperty:(id)arg1 ;
-(char)shouldCompareAllProperties;
-(void)setShouldCompareAllProperties:(char)arg1 ;
-(char)objectsAreTotallyDifferent;
-(NSSet *)differingProperties;
@end
