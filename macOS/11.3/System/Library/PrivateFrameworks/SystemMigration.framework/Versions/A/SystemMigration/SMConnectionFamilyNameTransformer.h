/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@interface SMConnectionFamilyNameTransformer : NSValueTransformer {

	char _useArticles;
	char _detailed;

}

@property (assign) char useArticles;              //@synthesize useArticles=_useArticles - In the implementation block
@property (assign) char detailed;                 //@synthesize detailed=_detailed - In the implementation block
+(char)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)transformedValue:(id)arg1 ;
-(void)setUseArticles:(char)arg1 ;
-(char)useArticles;
-(char)detailed;
-(void)setDetailed:(char)arg1 ;
@end

