/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/Versions/A/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreData/NSManagedObject.h>

@class TDElementProduction, TDRenditionSpec, NSString;

@interface TDSlice : NSManagedObject {

	CGRect _sliceRect;

}

@property (nonatomic,retain) TDElementProduction * production; 
@property (nonatomic,retain) TDRenditionSpec * rendition; 
@property (assign,nonatomic) CGRect sliceRect; 
@property (assign,nonatomic) CGRect primitiveSliceRect; 
@property (nonatomic,retain) NSString * sliceRectString; 
-(void)setSliceRect:(CGRect)arg1 ;
-(CGRect)sliceRect;
-(void)awakeFromFetch;
-(CGRect)primitiveSliceRect;
-(void)setPrimitiveSliceRect:(CGRect)arg1 ;
@end

