/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSApplication.framework/Versions/A/TSApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSApplication/TSApplication-Structs.h>
#import <TSApplication/TSPObjectContextDelegate.h>
#import <libobjc.A.dylib/NSFilePresenter.h>
#import <TSApplication/TSDImportExportDelegate.h>

@protocol TSKImporter, TSAImportDelegate, TSADocumentPassphraseProvider, OS_dispatch_queue;
@class NSURL, NSOperationQueue, NSSet, TSUTemporaryDirectory, NSMutableSet, NSMutableArray, NSProgress, NSString, TSPObjectContext, NSObject, SFUCryptoKey, TSPDocumentLoadValidationPolicy, TSPDocumentSaveValidationPolicy, NSDictionary, NSUUID, NSMapTable;

@interface TSAImportController : NSObject <TSPObjectContextDelegate, NSFilePresenter, TSDImportExportDelegate> {

	NSURL* _temporaryURL;
	TSUTemporaryDirectory* _temporaryDFFDirectory;
	NSMutableSet* _importWarnings;
	NSURL* _presentedItemURL;
	NSOperationQueue* _presentedItemOperationQueue;
	NSMutableArray* _deferredWriters;
	NSProgress* _resourceAccessProgress;
	struct {
		unsigned isPasswordProtected : 1;
		unsigned isCleanedUp : 1;
	}  _flags;
	char _temporaryURLShouldBeAppropriateForReplacingSourcePath;
	id<TSKImporter> _importer;
	id<TSAImportDelegate> _delegate;
	NSString* _sourcePath;
	TSUTemporaryDirectory* _temporaryDirectory;
	TSPObjectContext* _documentContext;
	id<TSADocumentPassphraseProvider> _passphraseProvider;
	NSURL* _fileURL;
	NSObject*<OS_dispatch_queue> _importQueue;
	NSString* _documentType;

}

@property (nonatomic,copy) NSURL * fileURL;                                                                          //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> importQueue;                                               //@synthesize importQueue=_importQueue - In the implementation block
@property (nonatomic,readonly) char shouldUpdateAdditionalResourceRequestsAfterImport; 
@property (nonatomic,copy,readonly) NSString * documentType;                                                         //@synthesize documentType=_documentType - In the implementation block
@property (nonatomic,readonly) id<TSKImporter> importer;                                                             //@synthesize importer=_importer - In the implementation block
@property (assign,nonatomic) id<TSAImportDelegate> delegate;                                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * sourcePath;                                                                //@synthesize sourcePath=_sourcePath - In the implementation block
@property (nonatomic,readonly) NSURL * temporaryURL; 
@property (assign,nonatomic) char temporaryURLShouldBeAppropriateForReplacingSourcePath;                             //@synthesize temporaryURLShouldBeAppropriateForReplacingSourcePath=_temporaryURLShouldBeAppropriateForReplacingSourcePath - In the implementation block
@property (nonatomic,readonly) TSUTemporaryDirectory * temporaryDirectory;                                           //@synthesize temporaryDirectory=_temporaryDirectory - In the implementation block
@property (nonatomic,readonly) TSPObjectContext * documentContext;                                                   //@synthesize documentContext=_documentContext - In the implementation block
@property (nonatomic,readonly) long long documentTypeCategory; 
@property (nonatomic,readonly) char hasWarnings; 
@property (nonatomic,readonly) char isBrowsingVersions; 
@property (nonatomic,readonly) char isPasswordProtected; 
@property (assign,nonatomic,__weak) id<TSADocumentPassphraseProvider> passphraseProvider;                            //@synthesize passphraseProvider=_passphraseProvider - In the implementation block
@property (nonatomic,readonly) id<NSFilePresenter> filePresenter; 
@property (readonly) SFUCryptoKey * encryptionKey; 
@property (nonatomic,readonly) TSPDocumentLoadValidationPolicy * documentLoadValidationPolicy; 
@property (nonatomic,readonly) TSPDocumentSaveValidationPolicy * documentSaveValidationPolicy; 
@property (nonatomic,readonly) char ignoreDocumentSupport; 
@property (nonatomic,readonly) char isDocumentSupportTemporary; 
@property (nonatomic,readonly) NSDictionary * additionalDocumentPropertiesForWrite; 
@property (nonatomic,readonly) NSDictionary * additionalDocumentSupportPropertiesForWrite; 
@property (nonatomic,readonly) char areNewExternalReferencesToDataAllowed; 
@property (nonatomic,readonly) NSUUID * baseUUIDForObjectUUID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL;                                                                  //@synthesize presentedItemURL=_presentedItemURL - In the implementation block
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue;                                          //@synthesize presentedItemOperationQueue=_presentedItemOperationQueue - In the implementation block
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
@property (nonatomic,readonly) NSMapTable * incompatibleMediaContainersWithDataUnsupportedOnThisDevice; 
@property (nonatomic,readonly) NSMapTable * incompatibleMediaContainersWithDataUnsupportedOnAllDevices; 
-(void)dealloc;
-(id)name;
-(id<TSAImportDelegate>)delegate;
-(void)setDelegate:(id<TSAImportDelegate>)arg1 ;
-(NSURL *)fileURL;
-(TSUTemporaryDirectory *)temporaryDirectory;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)relinquishPresentedItemToWriter:(/*^block*/id)arg1 ;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(id)defaultDraftName;
-(char)isBrowsingVersions;
-(void)addWarning:(id)arg1 ;
-(id)warnings;
-(char)hasWarnings;
-(NSString *)sourcePath;
-(NSString *)documentType;
-(id)logContext;
-(void)cancelImport;
-(char)isPasswordProtected;
-(id)documentProvider;
-(void)addPersistenceWarnings:(id)arg1 ;
-(char)areNewExternalReferencesToDataAllowed;
-(char)ignoreDocumentSupport;
-(void)presentPersistenceError:(id)arg1 ;
-(id)packageDataForWrite;
-(NSDictionary *)additionalDocumentPropertiesForWrite;
-(void)removeWarning:(id)arg1 ;
-(void)addIncompatibleMediaContainer:(id)arg1 incompatibleData:(id)arg2 compatibilityLevel:(long long)arg3 ;
-(id)additionalResourceRequestsForObjectContext:(id)arg1 ;
-(void)suspendAutosaveWithReason:(id)arg1 ;
-(void)resumeAutosaveWithReason:(id)arg1 ;
-(void)suspendSaveAndAutosaveWithReason:(id)arg1 ;
-(void)resumeSaveAndAutosaveWithReason:(id)arg1 ;
-(NSDictionary *)additionalDocumentSupportPropertiesForWrite;
-(id)initWithPath:(id)arg1 documentType:(id)arg2 delegate:(id)arg3 ;
-(void)_setPresentedItemURL:(id)arg1 ;
-(void)importWithProgress:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(Class)importerClass;
-(void)showProgressIfNeeded:(id)arg1 forURL:(id)arg2 ;
-(void)retrievePassphraseForEncryptedDocumentWithImporter:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)importErrorWithCode:(long long)arg1 description:(id)arg2 failureReason:(id)arg3 underlyingError:(id)arg4 ;
-(NSObject*<OS_dispatch_queue>)importQueue;
-(void)_beginImportWithProgress:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)finishImportWithProgress:(id)arg1 success:(char)arg2 error:(id)arg3 completionQueue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)prepareForImportDisplayingProgress:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)templateDocumentWithName:(id)arg1 variantIndex:(unsigned long long)arg2 ;
-(void)_continueImportWithProgress:(id)arg1 success:(char)arg2 error:(id)arg3 completedSteps:(int)arg4 completionQueue:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)makeObjectContextWithTemplateDocument:(id)arg1 error:(id*)arg2 ;
-(void)_performImportWithProgress:(id)arg1 completedSteps:(int)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)willSaveImportedDocument;
-(NSURL *)temporaryURL;
-(char)_saveContextToTemporaryURL:(id)arg1 passphrase:(id)arg2 originalURL:(id)arg3 documentUUID:(id)arg4 error:(id*)arg5 ;
-(char)needsFileCoordination;
-(TSPObjectContext *)documentContext;
-(id)initWithPath:(id)arg1 delegate:(id)arg2 ;
-(long long)documentTypeCategory;
-(id)importWithCompletionQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)shouldUpdateAdditionalResourceRequestsAfterImport;
-(void)removeFilePresenter;
-(id<TSKImporter>)importer;
-(char)temporaryURLShouldBeAppropriateForReplacingSourcePath;
-(void)setTemporaryURLShouldBeAppropriateForReplacingSourcePath:(char)arg1 ;
-(id<TSADocumentPassphraseProvider>)passphraseProvider;
-(void)setPassphraseProvider:(id<TSADocumentPassphraseProvider>)arg1 ;
-(void)setImportQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

