/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MetricKit.framework/Versions/A/MetricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricKit/MXDiagnostic.h>

@class MXCallStackTree, NSMeasurement;

@interface MXDiskWriteExceptionDiagnostic : MXDiagnostic {

	MXCallStackTree* _callStackTree;
	NSMeasurement* _totalWritesCaused;

}

@property (readonly) MXCallStackTree * callStackTree;                //@synthesize callStackTree=_callStackTree - In the implementation block
@property (readonly) NSMeasurement * totalWritesCaused;              //@synthesize totalWritesCaused=_totalWritesCaused - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(MXCallStackTree *)callStackTree;
-(id)initWithMetaData:(id)arg1 applicationVersion:(id)arg2 totalWritesCaused:(id)arg3 stackTrace:(id)arg4 ;
-(NSMeasurement *)totalWritesCaused;
@end
