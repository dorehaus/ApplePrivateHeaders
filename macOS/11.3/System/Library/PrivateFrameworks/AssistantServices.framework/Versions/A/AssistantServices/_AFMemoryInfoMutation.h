/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFMemoryInfoMutating.h>

@class AFMemoryInfo, NSString;

@interface _AFMemoryInfoMutation : NSObject <AFMemoryInfoMutating> {

	AFMemoryInfo* _baseModel;
	unsigned long long _virtualMemorySizeInBytes;
	int _numberOfRegions;
	int _pageSizeInBytes;
	unsigned long long _residentMemorySizeInBytes;
	unsigned long long _peakResidentMemorySizeInBytes;
	unsigned long long _physicalMemoryFootprintInBytes;
	struct {
		unsigned isDirty : 1;
		unsigned hasVirtualMemorySizeInBytes : 1;
		unsigned hasNumberOfRegions : 1;
		unsigned hasPageSizeInBytes : 1;
		unsigned hasResidentMemorySizeInBytes : 1;
		unsigned hasPeakResidentMemorySizeInBytes : 1;
		unsigned hasPhysicalMemoryFootprintInBytes : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setVirtualMemorySizeInBytes:(unsigned long long)arg1 ;
-(void)setNumberOfRegions:(int)arg1 ;
-(void)setPageSizeInBytes:(int)arg1 ;
-(void)setResidentMemorySizeInBytes:(unsigned long long)arg1 ;
-(void)setPeakResidentMemorySizeInBytes:(unsigned long long)arg1 ;
-(void)setPhysicalMemoryFootprintInBytes:(unsigned long long)arg1 ;
@end

