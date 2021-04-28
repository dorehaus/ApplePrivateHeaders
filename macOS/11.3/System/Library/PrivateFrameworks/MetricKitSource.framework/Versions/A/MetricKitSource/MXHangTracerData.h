/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MetricKitSource.framework/Versions/A/MetricKitSource
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricKitSource/MXSourceData.h>

@class MXHangDiagnostic;

@interface MXHangTracerData : MXSourceData {

	MXHangDiagnostic* _hangDiagnostic;

}

@property (retain) MXHangDiagnostic * hangDiagnostic;              //@synthesize hangDiagnostic=_hangDiagnostic - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MXHangDiagnostic *)hangDiagnostic;
-(id)initPayloadDataWithDiagnostics:(id)arg1 ;
-(void)setHangDiagnostic:(MXHangDiagnostic *)arg1 ;
@end

