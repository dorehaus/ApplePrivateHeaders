/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ECColumnWidthConvertor : NSObject {

	int mMultiplier;

}
-(double)lassoColumnWidthFromXl:(double)arg1 ;
-(void)setupWithEDFont:(id)arg1 state:(id)arg2 ;
-(double)xlColumnWidthFromXlBaseColumnWidth:(double)arg1 ;
-(CGSize)stringSizeWithFont:(id)arg1 edFont:(id)arg2 drawingState:(id)arg3 ;
-(float)fontWidthAdjustmentFor:(id)arg1 ;
-(double)xlColumnWidthFromLasso:(double)arg1 ;
@end

