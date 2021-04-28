/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/Versions/A/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSSet;

@interface CHStrokeGroupingResult : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _strokeGroupsSortedTopBottomLeftRight;
	NSArray* _textStrokeGroupsSortedByWritingOrientation;
	NSArray* _strokeGroupsSortedByWritingOrientation;
	NSArray* _textStrokeGroupClusters;
	NSArray* _strokeGroupClusters;
	NSSet* _textStrokeGroups;
	NSSet* _strokeGroups;
	NSSet* _createdStrokeGroups;
	NSSet* _deletedStrokeGroups;

}

@property (nonatomic,copy,readonly) NSSet * strokeGroups;                                              //@synthesize strokeGroups=_strokeGroups - In the implementation block
@property (nonatomic,copy,readonly) NSSet * createdStrokeGroups;                                       //@synthesize createdStrokeGroups=_createdStrokeGroups - In the implementation block
@property (nonatomic,copy,readonly) NSSet * deletedStrokeGroups;                                       //@synthesize deletedStrokeGroups=_deletedStrokeGroups - In the implementation block
@property (nonatomic,copy,readonly) NSArray * textStrokeGroupsSortedTopBottomLeftRight; 
@property (nonatomic,copy,readonly) NSArray * textStrokeGroupsSortedByWritingOrientation; 
@property (nonatomic,copy,readonly) NSArray * strokeGroupsSortedByWritingOrientation; 
@property (nonatomic,copy,readonly) NSArray * strokeGroupClusters; 
@property (nonatomic,copy,readonly) NSArray * textStrokeGroupClusters; 
@property (nonatomic,copy,readonly) NSSet * textStrokeGroups; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)strokeGroups;
-(NSArray *)strokeGroupsSortedByWritingOrientation;
-(id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3 ;
-(NSArray *)textStrokeGroupsSortedTopBottomLeftRight;
-(NSSet *)textStrokeGroups;
-(NSArray *)strokeGroupClusters;
-(NSArray *)textStrokeGroupsSortedByWritingOrientation;
-(NSArray *)textStrokeGroupClusters;
-(NSSet *)createdStrokeGroups;
-(NSSet *)deletedStrokeGroups;
-(id)_sortedStrokeGroupsByWritingOrientationTextOnly:(char)arg1 ;
-(char)isEqualToStrokeGroupingResult:(id)arg1 ;
@end

