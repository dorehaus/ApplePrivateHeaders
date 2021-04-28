/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/Versions/A/ChronoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChronoServices/ChronoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CHSWidgetMetrics, NSFileHandle;

@interface CHSPlaceholderRequest : NSObject <NSCopying, NSSecureCoding> {

	CHSWidgetMetrics* _metrics;
	long long _family;
	NSFileHandle* _fileHandle;

}

@property (nonatomic,readonly) CHSWidgetMetrics * metrics;              //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) long long family;                        //@synthesize family=_family - In the implementation block
@property (nonatomic,readonly) NSFileHandle * fileHandle;               //@synthesize fileHandle=_fileHandle - In the implementation block
+(id)new;
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSFileHandle *)fileHandle;
-(long long)family;
-(CHSWidgetMetrics *)metrics;
-(id)initWithMetrics:(id)arg1 family:(long long)arg2 fileHandle:(id)arg3 ;
@end

