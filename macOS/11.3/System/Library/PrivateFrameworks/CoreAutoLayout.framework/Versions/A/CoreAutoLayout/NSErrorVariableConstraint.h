/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/Versions/A/CoreAutoLayout
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAutoLayout/NSLayoutConstraint.h>

@class NSISVariable;

@interface NSErrorVariableConstraint : NSLayoutConstraint {

	NSISVariable* _errorVariable;
	double _errorValue;

}
-(id)constrainedConstraint;
-(void)dealloc;
-(int)nsis_orientationHintForVariable:(id)arg1 ;
-(char)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(char*)arg2 ;
-(id)initWithVariable:(id)arg1 value:(double)arg2 ;
@end

