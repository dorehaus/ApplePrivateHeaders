/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSKit.framework/Versions/A/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSKit/TSKit-Structs.h>
#import <TSKit/TSKCOUpdateOperation.h>
#import <TSKit/TSKCORangeOperation.h>

@interface TSKCOUpdateRangeOperation : TSKCOUpdateOperation <TSKCORangeOperation> {

	vector<_NSRange, std::__1::allocator<_NSRange>>* _rangeVector;
	int _transformBehavior;

}

@property (nonatomic,readonly) int transformBehavior;                           //@synthesize transformBehavior=_transformBehavior - In the implementation block
@property (nonatomic,readonly) const vector<_NSRange* rangeVector; 
+(int)p_determineTransformBehaviorByPropertyId:(unsigned short)arg1 ;
+(id)stringForTransformBehavior:(int)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)toString;
-(void)saveToArchiver:(id)arg1 message:(Operation*)arg2 ;
-(id)initWithUnarchiver:(id)arg1 message:(const Operation*)arg2 ;
-(id)operationWithNewNoop:(char)arg1 ;
-(shared_ptr<TSKCO::AbstractOperation>*)newTransformableOperation;
-(id)initWithAddress:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData>>>*)arg1 rangeVector:(const vector<_NSRange, std::__1::allocator<_NSRange>>*)arg2 propertyId:(unsigned short)arg3 noop:(char)arg4 ;
-(id)initWithAddress:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData>>>*)arg1 rangeVector:(const vector<_NSRange, std::__1::allocator<_NSRange>>*)arg2 propertyId:(unsigned short)arg3 transformBehavior:(int)arg4 noop:(char)arg5 ;
-(const vector<_NSRange*)rangeVector;
-(int)transformBehavior;
-(id)initWithAddress:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData>>>*)arg1 rangeVector:(const vector<_NSRange, std::__1::allocator<_NSRange>>*)arg2 propertyType:(SCD_Struct_TS20)arg3 transformBehavior:(int)arg4 noop:(char)arg5 ;
-(id)initWithAddress:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData>>>*)arg1 rangeVector:(const vector<_NSRange, std::__1::allocator<_NSRange>>*)arg2 propertyId:(unsigned short)arg3 ;
-(id)initWithAddress:(const vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData>>>*)arg1 rangeVector:(const vector<_NSRange, std::__1::allocator<_NSRange>>*)arg2 selectionPropertyId:(unsigned short)arg3 ;
@end

