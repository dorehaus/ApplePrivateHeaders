/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BoardServices.framework/Versions/A/BoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BoardServices/BoardServices-Structs.h>
@class BSServiceDomain, BSServiceSpecification, BSZeroingWeakReference, NSMutableDictionary, NSMutableArray;

@interface BSService : NSObject {

	BSServiceDomain* _domain;
	BSServiceSpecification* _specification;
	os_unfair_lock_s _lock;
	BSZeroingWeakReference* _lock_globalListener;
	NSMutableDictionary* _lock_instanceToListener;
	NSMutableArray* _lock_pendedConnections;

}
@end

