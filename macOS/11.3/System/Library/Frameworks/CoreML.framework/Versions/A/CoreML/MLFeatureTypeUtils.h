/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreML.framework/Versions/A/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MLFeatureTypeUtils : NSObject
+(long long)featureTypeForObject:(id)arg1 ;
+(long long)featureTypeForValuesInArray:(id)arg1 error:(id*)arg2 ;
+(id)featureDescriptionWithName:(id)arg1 consistentWithFeatureValues:(id)arg2 error:(id*)arg3 ;
+(id)featureValuesWithConsistentTypeFromArray:(id)arg1 error:(id*)arg2 ;
+(id)descriptionForType:(long long)arg1 ;
+(char)canShapeArrayBePromotedFrom:(id)arg1 to:(id)arg2 ;
@end

