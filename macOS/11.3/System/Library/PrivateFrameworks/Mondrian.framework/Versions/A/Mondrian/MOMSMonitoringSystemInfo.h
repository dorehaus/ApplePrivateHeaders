/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Mondrian.framework/Versions/A/Mondrian
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MOMSMonitoringSystemInfo : NSObject <NSSecureCoding> {

	double _cpuUsagePercentage;
	unsigned long long _physicalMemoryFreeBytes;
	unsigned long long _physicalMemoryUsedBytes;
	unsigned long long _virtualMemoryBytes;
	unsigned long long _virtualMemoryPageInBytes;
	unsigned long long _virtualMemoryPageOutBytes;
	unsigned long long _virtualMemoryCompressedBytes;
	unsigned long long _virtualMemorySwapUsedBytes;
	unsigned long long _diskBytesReadPerInterval;
	unsigned long long _diskBytesWritePerInterval;

}

@property (assign) double cpuUsagePercentage;                                    //@synthesize cpuUsagePercentage=_cpuUsagePercentage - In the implementation block
@property (assign) unsigned long long physicalMemoryFreeBytes;                   //@synthesize physicalMemoryFreeBytes=_physicalMemoryFreeBytes - In the implementation block
@property (assign) unsigned long long physicalMemoryUsedBytes;                   //@synthesize physicalMemoryUsedBytes=_physicalMemoryUsedBytes - In the implementation block
@property (assign) unsigned long long virtualMemoryBytes;                        //@synthesize virtualMemoryBytes=_virtualMemoryBytes - In the implementation block
@property (assign) unsigned long long virtualMemoryPageInBytes;                  //@synthesize virtualMemoryPageInBytes=_virtualMemoryPageInBytes - In the implementation block
@property (assign) unsigned long long virtualMemoryPageOutBytes;                 //@synthesize virtualMemoryPageOutBytes=_virtualMemoryPageOutBytes - In the implementation block
@property (assign) unsigned long long virtualMemoryCompressedBytes;              //@synthesize virtualMemoryCompressedBytes=_virtualMemoryCompressedBytes - In the implementation block
@property (assign) unsigned long long virtualMemorySwapUsedBytes;                //@synthesize virtualMemorySwapUsedBytes=_virtualMemorySwapUsedBytes - In the implementation block
@property (assign) unsigned long long diskBytesReadPerInterval;                  //@synthesize diskBytesReadPerInterval=_diskBytesReadPerInterval - In the implementation block
@property (assign) unsigned long long diskBytesWritePerInterval;                 //@synthesize diskBytesWritePerInterval=_diskBytesWritePerInterval - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)cpuUsagePercentage;
-(void)setCpuUsagePercentage:(double)arg1 ;
-(unsigned long long)physicalMemoryFreeBytes;
-(void)setPhysicalMemoryFreeBytes:(unsigned long long)arg1 ;
-(unsigned long long)physicalMemoryUsedBytes;
-(void)setPhysicalMemoryUsedBytes:(unsigned long long)arg1 ;
-(unsigned long long)virtualMemoryBytes;
-(void)setVirtualMemoryBytes:(unsigned long long)arg1 ;
-(unsigned long long)virtualMemoryPageInBytes;
-(void)setVirtualMemoryPageInBytes:(unsigned long long)arg1 ;
-(unsigned long long)virtualMemoryPageOutBytes;
-(void)setVirtualMemoryPageOutBytes:(unsigned long long)arg1 ;
-(unsigned long long)virtualMemoryCompressedBytes;
-(void)setVirtualMemoryCompressedBytes:(unsigned long long)arg1 ;
-(unsigned long long)virtualMemorySwapUsedBytes;
-(void)setVirtualMemorySwapUsedBytes:(unsigned long long)arg1 ;
-(unsigned long long)diskBytesReadPerInterval;
-(void)setDiskBytesReadPerInterval:(unsigned long long)arg1 ;
-(unsigned long long)diskBytesWritePerInterval;
-(void)setDiskBytesWritePerInterval:(unsigned long long)arg1 ;
@end

