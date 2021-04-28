#import <AVFCore/AVPlayerLayerIntermediateLayer.h>
#import <AVFCore/AVPlayerLayerInternal.h>
#import <AVFCore/AVPlayerLayer.h>
#import <AVFCore/CMTimeAsValue.h>
#import <AVFCore/CMTimeRangeAsValue.h>
#import <AVFCore/CMTimeMappingAsValue.h>
#import <AVFCore/AVFragmentedMovie.h>
#import <AVFCore/AVFragmentedMovieMinder.h>
#import <AVFCore/AVFragmentedMovieTrackInternal.h>
#import <AVFCore/AVFragmentedMovieTrack.h>
#import <AVFCore/AVOutputDeviceGroup.h>
#import <AVFCore/AVOutputDeviceGroupMembershipChangeResult.h>
#import <AVFCore/AVMetadataItemInternal.h>
#import <AVFCore/AVMetadataItem.h>
#import <AVFCore/AVMutableMetadataItem.h>
#import <AVFCore/AVLazyValueLoadingMetadataItemInternal.h>
#import <AVFCore/AVLazyValueLoadingMetadataItem.h>
#import <AVFCore/AVMetadataItemValueRequestInternal.h>
#import <AVFCore/AVMetadataItemValueRequest.h>
#import <AVFCore/AVChapterMetadataItemInternal.h>
#import <AVFCore/AVChapterMetadataItem.h>
#import <AVFCore/AVMetadataItemFilterForSharing.h>
#import <AVFCore/AVMetadataItemFilterInternal.h>
#import <AVFCore/AVMetadataItemFilter.h>
#import <AVFCore/AVFigEndpointOutputDeviceImpl.h>
#import <AVFCore/AVFigEndpointSecondDisplayModeToken.h>
#import <AVFCore/AVAssetInternal.h>
#import <AVFCore/AVAsset.h>
#import <AVFCore/AVAssetFragmentInternal.h>
#import <AVFCore/AVAssetFragment.h>
#import <AVFCore/AVFragmentedAssetsArray.h>
#import <AVFCore/AVURLAssetInternal.h>
#import <AVFCore/AVURLAsset.h>
#import <AVFCore/AVAssetClientURLRequestHelper.h>
#import <AVFCore/AVDataAsset.h>
#import <AVFCore/AVAssetTrackEnumerator.h>
#import <AVFCore/AVURLAssetItemProviderData.h>
#import <AVFCore/AVAssetImageGeneratorInternal.h>
#import <AVFCore/AVAssetImageGenerator.h>
#import <AVFCore/AVAssetTrackInternal.h>
#import <AVFCore/AVAssetTrack.h>
#import <AVFCore/AVPlayerInternal.h>
#import <AVFCore/AVPlayer.h>
#import <AVFCore/AVPlayerQueueModificationDescription.h>
#import <AVFCore/AVVideoCompositionRenderHintInternal.h>
#import <AVFCore/AVVideoCompositionRenderHint.h>
#import <AVFCore/AVAssetWriterInputMetadataAdaptorInternal.h>
#import <AVFCore/AVAssetWriterInputMetadataAdaptor.h>
#import <AVFCore/AVPlayerItemInternal.h>
#import <AVFCore/AVPlayerItem.h>
#import <AVFCore/AVPlayerConnection.h>
#import <AVFCore/AVPlayerItemTrackInternal.h>
#import <AVFCore/AVPlayerItemTrack.h>
#import <AVFCore/AVTimeFormatterInternal.h>
#import <AVFCore/AVTimeFormatter.h>
#import <AVFCore/AVQueuePlayer.h>
#import <AVFCore/AVQueuePlayerInternal.h>
#import <AVFCore/AVCompositionInternal.h>
#import <AVFCore/AVComposition.h>
#import <AVFCore/AVMutableCompositionInternal.h>
#import <AVFCore/AVMutableComposition.h>
#import <AVFCore/AVCompositionFormatReaderInspector.h>
#import <AVFCore/AVAPSyncOutputDeviceCommunicationChannelManager.h>
#import <AVFCore/AVAPSyncOutputDeviceCommunicationChannelImpl.h>
#import <AVFCore/AVSpecifiedLoggingIdentifierInternal.h>
#import <AVFCore/AVSpecifiedLoggingIdentifier.h>
#import <AVFCore/AVAssetLoggingIdentifierInternal.h>
#import <AVFCore/AVAssetLoggingIdentifier.h>
#import <AVFCore/AVPlayerLoggingIdentifierInternal.h>
#import <AVFCore/AVPlayerLoggingIdentifier.h>
#import <AVFCore/AVCaptionRendererInternal.h>
#import <AVFCore/AVCaptionRenderer.h>
#import <AVFCore/AVCaptionRendererSceneInternal.h>
#import <AVFCore/AVCaptionRendererScene.h>
#import <AVFCore/AVCompositionTrackFormatDescriptionReplacement.h>
#import <AVFCore/AVCompositionTrackInternal.h>
#import <AVFCore/AVCompositionTrack.h>
#import <AVFCore/AVMutableCompositionTrackInternal.h>
#import <AVFCore/AVMutableCompositionTrack.h>
#import <AVFCore/AVLegibleMediaSearchCursor.h>
#import <AVFCore/AVAssetCustomURLRequest.h>
#import <AVFCore/AVAssetCustomURLBridgeForNSURLSession.h>
#import <AVFCore/AVNSURLProtocolRequest.h>
#import <AVFCore/AVAssetCustomURLBridgeForNSURLProtocol.h>
#import <AVFCore/AVAssetCustomURLAuthentication.h>
#import <AVFCore/AVCompositionTrackSegmentInternal.h>
#import <AVFCore/AVCompositionTrackSegment.h>
#import <AVFCore/AVAssetReaderInternal.h>
#import <AVFCore/AVAssetReader.h>
#import <AVFCore/AVMovieTrackInternal.h>
#import <AVFCore/AVMovieTrack.h>
#import <AVFCore/AVMutableMovieTrackInternal.h>
#import <AVFCore/AVMutableMovieTrack.h>
#import <AVFCore/AVAssetReaderOutputInternal.h>
#import <AVFCore/AVAssetReaderOutput.h>
#import <AVFCore/AVAssetReaderTrackOutputInternal.h>
#import <AVFCore/AVAssetReaderTrackOutput.h>
#import <AVFCore/AVAssetReaderAudioMixOutputInternal.h>
#import <AVFCore/AVAssetReaderAudioMixOutput.h>
#import <AVFCore/AVAssetReaderVideoCompositionOutputInternal.h>
#import <AVFCore/AVAssetReaderVideoCompositionOutput.h>
#import <AVFCore/AVAssetReaderSampleReferenceOutputInternal.h>
#import <AVFCore/AVAssetReaderSampleReferenceOutput.h>
#import <AVFCore/AVDataDelegateAssetInternal.h>
#import <AVFCore/AVDataDelegateAsset.h>
#import <AVFCore/AVAPSyncControllerOutputDeviceImpl.h>
#import <AVFCore/AVAssetWriterConfigurationState.h>
#import <AVFCore/AVAssetWriterInternal.h>
#import <AVFCore/AVAssetWriter.h>
#import <AVFCore/AVAssetWriterUnknownHelper.h>
#import <AVFCore/AVAssetWriterFigAssetWriterNotificationHandler.h>
#import <AVFCore/AVFragmentedMediaDataReportInternal.h>
#import <AVFCore/AVFragmentedMediaDataReport.h>
#import <AVFCore/AVAssetWriterWritingHelper.h>
#import <AVFCore/AVWorkaroundNSBlockOperation.h>
#import <AVFCore/AVAssetWriterFinishWritingHelper.h>
#import <AVFCore/AVFigAssetWriterFinishWritingAsyncOperation.h>
#import <AVFCore/AVAssetWriterTerminalHelper.h>
#import <AVFCore/AVAssetWriterFailedTerminalHelper.h>
#import <AVFCore/AVAssetWriterClientInitiatedTerminalHelper.h>
#import <AVFCore/AVAssetWriterHelper.h>
#import <AVFCore/AVAssetWriterInputGroupInternal.h>
#import <AVFCore/AVAssetWriterInputGroup.h>
#import <AVFCore/AVAssetWriterInputSelectionOption.h>
#import <AVFCore/AVAssetWriterInputConfigurationState.h>
#import <AVFCore/AVAssetWriterInputInternal.h>
#import <AVFCore/AVAssetWriterInput.h>
#import <AVFCore/AVAssetWriterInputUnknownHelper.h>
#import <AVFCore/AVAssetWriterInputWritingHelper.h>
#import <AVFCore/AVAssetWriterInputInterPassAnalysisHelper.h>
#import <AVFCore/AVAssetWriterInputNoMorePassesHelper.h>
#import <AVFCore/AVAssetWriterInputTerminalHelper.h>
#import <AVFCore/AVAssetWriterInputHelper.h>
#import <AVFCore/AVAssetWriterInputPixelBufferAdaptorInternal.h>
#import <AVFCore/AVAssetWriterInputPixelBufferAdaptor.h>
#import <AVFCore/AVFigAssetWriterTrack.h>
#import <AVFCore/AVFigAssetWriterAudioTrack.h>
#import <AVFCore/AVFigAssetWriterVideoTrack.h>
#import <AVFCore/AVFigAssetWriterCaptionTrack.h>
#import <AVFCore/AVFigAssetWriterGenericTrack.h>
#import <AVFCore/AVAssetWriterInputMediaDataRequester.h>
#import <AVFCore/AVAssetWriterInputPassDescriptionResponder.h>
#import <AVFCore/AVAssetWriterInputFigAssetWriterEndPassOperation.h>
#import <AVFCore/AVAssetWriterInputPassDescriptionInternal.h>
#import <AVFCore/AVAssetWriterInputPassDescription.h>
#import <AVFCore/AVVideoCompositionInstructionInternal.h>
#import <AVFCore/AVVideoCompositionInstruction.h>
#import <AVFCore/AVMutableVideoCompositionInstruction.h>
#import <AVFCore/AVVideoCompositionLayerInstructionInternal.h>
#import <AVFCore/AVVideoCompositionLayerInstruction.h>
#import <AVFCore/AVMutableVideoCompositionLayerInstruction.h>
#import <AVFCore/AVVideoCompositionInternal.h>
#import <AVFCore/AVVideoComposition.h>
#import <AVFCore/AVMutableVideoComposition.h>
#import <AVFCore/AVVideoCompositionCoreAnimationTool.h>
#import <AVFCore/AVVideoCompositionCoreAnimationToolInternal.h>
#import <AVFCore/AVAssetExportSessionInternal.h>
#import <AVFCore/AVAssetExportSession.h>
#import <AVFCore/AVSynchronizedLayerInternal.h>
#import <AVFCore/AVSynchronizedLayer.h>
#import <AVFCore/AVSearchCursor.h>
#import <AVFCore/AVSearchMatchDescription.h>
#import <AVFCore/AVPlayerInterstitialEvent.h>
#import <AVFCore/AVPlayerInterstitialEventObserver.h>
#import <AVFCore/AVPlayerInterstitialEventController.h>
#import <AVFCore/AVExecutionEnvironment.h>
#import <AVFCore/AVAssetSegmentReportSampleInformation.h>
#import <AVFCore/AVAssetSegmentTrackReport.h>
#import <AVFCore/AVAssetSegmentReport.h>
#import <AVFCore/AVMetadataEnumerator.h>
#import <AVFCore/AVAssetTrackSegment.h>
#import <AVFCore/AVAssetReaderOutputCaptionAdaptorInternal.h>
#import <AVFCore/AVAssetReaderOutputCaptionAdaptor.h>
#import <AVFCore/AVStreamSessionInternal.h>
#import <AVFCore/AVStreamSession.h>
#import <AVFCore/AVPlayerLooperInternal.h>
#import <AVFCore/AVPlayerLooper.h>
#import <AVFCore/AVAudioMix.h>
#import <AVFCore/AVMutableAudioMix.h>
#import <AVFCore/AVAudioMixInternal.h>
#import <AVFCore/AVAudioMixInputParameters.h>
#import <AVFCore/AVAudioMixInputParametersInternal.h>
#import <AVFCore/AVMutableAudioMixInputParameters.h>
#import <AVFCore/AVRunLoopConditionRunLoopState.h>
#import <AVFCore/AVRunLoopCondition.h>
#import <AVFCore/AVCaptionConversionValidator.h>
#import <AVFCore/AVCaptionConversionWarning.h>
#import <AVFCore/AVCaptionConversionAdjustment.h>
#import <AVFCore/AVCaptionConversionTimeRangeAdjustment.h>
#import <AVFCore/AVMediaDataStorageInternal.h>
#import <AVFCore/AVMediaDataStorage.h>
#import <AVFCore/AVMovieInternal.h>
#import <AVFCore/AVMovie.h>
#import <AVFCore/AVMutableMovieInternal.h>
#import <AVFCore/AVMutableMovie.h>
#import <AVFCore/AVAssetInspector.h>
#import <AVFCore/AVFormatReaderInspector.h>
#import <AVFCore/AVPlaybackItemInspector.h>
#import <AVFCore/AVStreamingResourceInspector.h>
#import <AVFCore/AVFigAssetInspector.h>
#import <AVFCore/AVTimebaseObserver.h>
#import <AVFCore/AVPeriodicTimebaseObserver.h>
#import <AVFCore/AVOccasionalTimebaseObserver.h>
#import <AVFCore/AVOnceTimebaseObserver.h>
#import <AVFCore/AVAssetInspectorLoader.h>
#import <AVFCore/AVAssetSynchronousInspectorLoader.h>
#import <AVFCore/AVAssetMakeReadyForInspectionLoader.h>
#import <AVFCore/AVPlaybackItemInspectorLoader.h>
#import <AVFCore/AVFigAssetInspectorLoader.h>
#import <AVFCore/AVUnreachableAssetInspectorLoader.h>
#import <AVFCore/AVAssetTrackInspector.h>
#import <AVFCore/AVTrackReaderInspector.h>
#import <AVFCore/AVFigAssetTrackInspector.h>
#import <AVFCore/AVCompositionTrackReaderInspector.h>
#import <AVFCore/AVPlaybackItemTrackInspector.h>
#import <AVFCore/AVFigRoutingContextSendConfigureDeviceCommandOperation.h>
#import <AVFCore/AVFigRoutingContextCommandOutputDeviceConfigurationModification.h>
#import <AVFCore/AVFigRoutingContextCommandOutputDeviceConfiguration.h>
#import <AVFCore/AVFigRoutingContextRouteChangeOperation.h>
#import <AVFCore/AVRouteConfigUpdatedFigRoutingContextRouteChangeOperation.h>
#import <AVFCore/AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl.h>
#import <AVFCore/AVFigEndpointUIAgentOutputDeviceAuthorizationRequestImpl.h>
#import <AVFCore/AVAPSyncControllerRemoteOutputDeviceGroupImpl.h>
#import <AVFCore/AVCaptionFormatConformer.h>
#import <AVFCore/AVContentKeyRequestInternal.h>
#import <AVFCore/AVContentKeyRequest.h>
#import <AVFCore/AVPersistableContentKeyRequest.h>
#import <AVFCore/AVContentKeyResponseFairPlayStreaming.h>
#import <AVFCore/AVContentKeyResponseClearKey.h>
#import <AVFCore/AVContentKeyResponseAuthorizationToken.h>
#import <AVFCore/AVContentKeyResponseInternal.h>
#import <AVFCore/AVContentKeyResponse.h>
#import <AVFCore/AVContentKeySessionInternal.h>
#import <AVFCore/AVContentKeySession.h>
#import <AVFCore/AVContentKeyReportGroup.h>
#import <AVFCore/AVContentKeySpecifier.h>
#import <AVFCore/AVContentKey.h>
#import <AVFCore/AVEventWaiter.h>
#import <AVFCore/AVDispatchOnce.h>
#import <AVFCore/AVWeakReference.h>
#import <AVFCore/AVRetainReleaseWeakReference.h>
#import <AVFCore/AVAssetWriterInputCaptionAdaptorInternal.h>
#import <AVFCore/AVAssetWriterInputCaptionAdaptor.h>
#import <AVFCore/AVCallbackContextRegistry.h>
#import <AVFCore/AVCMNotificationDispatcher.h>
#import <AVFCore/AVCMNotificationDispatcherListenerKey.h>
#import <AVFCore/AVAssetReaderOutputMetadataAdaptorInternal.h>
#import <AVFCore/AVAssetReaderOutputMetadataAdaptor.h>
#import <AVFCore/AVFigRouteDescriptorOutputDeviceImpl.h>
#import <AVFCore/AVAssetTrackGroupInternal.h>
#import <AVFCore/AVAssetTrackGroup.h>
#import <AVFCore/AVMetadataGroup.h>
#import <AVFCore/AVTimedMetadataGroupInternal.h>
#import <AVFCore/AVTimedMetadataGroup.h>
#import <AVFCore/AVMutableTimedMetadataGroup.h>
#import <AVFCore/AVDateRangeMetadataGroupInternal.h>
#import <AVFCore/AVDateRangeMetadataGroup.h>
#import <AVFCore/AVMutableDateRangeMetadataGroup.h>
#import <AVFCore/AVSynchronousBlockScheduler.h>
#import <AVFCore/AVSerializedMostlySynchronousReentrantBlockScheduler.h>
#import <AVFCore/AVAssetCache.h>
#import <AVFCore/AVManagedAssetCacheInternal.h>
#import <AVFCore/AVManagedAssetCache.h>
#import <AVFCore/AVAssetDownloadCacheInternal.h>
#import <AVFCore/AVAssetDownloadCache.h>
#import <AVFCore/AVHUDStringGenerator.h>
#import <AVFCore/AVNetworkPlaybackPerfHUDLayer.h>
#import <AVFCore/AVOutputContextInternal.h>
#import <AVFCore/AVOutputContext.h>
#import <AVFCore/AVOutputContextCommunicationChannelInternal.h>
#import <AVFCore/AVOutputContextCommunicationChannel.h>
#import <AVFCore/AVOutputContextDestinationChangeInternal.h>
#import <AVFCore/AVOutputContextDestinationChange.h>
#import <AVFCore/AVOutputContextManagerInternal.h>
#import <AVFCore/AVOutputContextManager.h>
#import <AVFCore/AVOutputContextLocalOutputDeviceGroupImpl.h>
#import <AVFCore/AVOutputDeviceAuthorizationSessionInternal.h>
#import <AVFCore/AVOutputDeviceAuthorizationSession.h>
#import <AVFCore/AVOutputDeviceAuthorizationRequestInternal.h>
#import <AVFCore/AVOutputDeviceAuthorizationRequest.h>
#import <AVFCore/AVSearchPredicate.h>
#import <AVFCore/AVMediaDataRequester.h>
#import <AVFCore/AVSampleBufferVideoOutputInternal.h>
#import <AVFCore/AVSampleBufferVideoOutput.h>
#import <AVFCore/AVStreamDataParserInternal.h>
#import <AVFCore/AVStreamDataParser.h>
#import <AVFCore/AVSampleBufferRenderSynchronizerInternal.h>
#import <AVFCore/AVSampleBufferRenderSynchronizer.h>
#import <AVFCore/AVLocalFigSampleBufferRenderSynchronizerFactory.h>
#import <AVFCore/AVFigRouteDiscovererOutputDeviceDiscoverySessionFactory.h>
#import <AVFCore/AVFigRouteDiscovererOutputDeviceDiscoverySessionImpl.h>
#import <AVFCore/AVFigRouteDescriptorOutputDeviceDiscoverySessionAvailableOutputDevicesImpl.h>
#import <AVFCore/AVSampleCursorInternal.h>
#import <AVFCore/AVSampleCursor.h>
#import <AVFCore/AVFigEndpointOutputDeviceDiscoverySessionAvailableOutputDevicesImpl.h>
#import <AVFCore/AVStringSearchPredicate.h>
#import <AVFCore/AVCaptionGroupInternal.h>
#import <AVFCore/AVCaptionGroup.h>
#import <AVFCore/AVExternalPlaybackMonitor.h>
#import <AVFCore/AVSampleBufferAudioRendererInternal.h>
#import <AVFCore/AVSampleBufferAudioRenderer.h>
#import <AVFCore/AVMediaSelectionInternal.h>
#import <AVFCore/AVMediaSelection.h>
#import <AVFCore/AVMutableMediaSelection.h>
#import <AVFCore/AVAssetProxyInternal.h>
#import <AVFCore/AVAssetProxy.h>
#import <AVFCore/AVOutputDeviceDiscoverySessionInternal.h>
#import <AVFCore/AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal.h>
#import <AVFCore/AVOutputDeviceDiscoverySession.h>
#import <AVFCore/AVEmptyOutputDeviceDiscoverySessionAvailableOutputDevices.h>
#import <AVFCore/AVOutputDeviceDiscoverySessionAvailableOutputDevices.h>
#import <AVFCore/AVAsynchronousCIImageFilteringRequestInternal.h>
#import <AVFCore/AVAsynchronousCIImageFilteringRequest.h>
#import <AVFCore/AVCoreImageFilterVideoCompositionInstruction.h>
#import <AVFCore/AVCoreImageFilterCustomVideoCompositor.h>
#import <AVFCore/AVPlayerItemMetadataCollectorInternal.h>
#import <AVFCore/AVPlayerItemMetadataCollector.h>
#import <AVFCore/AVPlayerItemInterstitialEventCollector.h>
#import <AVFCore/AVPlayerItemAccessLogInternal.h>
#import <AVFCore/AVPlayerItemAccessLog.h>
#import <AVFCore/AVPlayerItemAccessLogEventInternal.h>
#import <AVFCore/AVPlayerItemAccessLogEvent.h>
#import <AVFCore/AVPlayerItemErrorLogInternal.h>
#import <AVFCore/AVPlayerItemErrorLog.h>
#import <AVFCore/AVPlayerItemErrorLogEventInternal.h>
#import <AVFCore/AVPlayerItemErrorLogEvent.h>
#import <AVFCore/AVKVODispatcher.h>
#import <AVFCore/AVObservationBlockFactory.h>
#import <AVFCore/AVWeakObservationBlockFactory.h>
#import <AVFCore/AVClientBlockKVONotifier.h>
#import <AVFCore/AVWeaklyObservedObjectClientBlockKVONotifier.h>
#import <AVFCore/AVWeakObservableCallbackCancellationHelper.h>
#import <AVFCore/AVKeyPathDependencyManager.h>
#import <AVFCore/AVKeyPathDependency.h>
#import <AVFCore/AVTwoPartKeyPath.h>
#import <AVFCore/AVKeyPathFlattener.h>
#import <AVFCore/AVKeyPathFlattenerKVOIntrospectionShim.h>
#import <AVFCore/AVLegibleMediaSearchMatchDescription.h>
#import <AVFCore/AVMediaSelectionGroupInternal.h>
#import <AVFCore/AVMediaSelectionGroup.h>
#import <AVFCore/AVAssetMediaSelectionGroup.h>
#import <AVFCore/AVMediaSelectionOptionInternal.h>
#import <AVFCore/AVMediaSelectionOption.h>
#import <AVFCore/AVMediaSelectionTrackOption.h>
#import <AVFCore/AVMediaSelectionKeyValueOption.h>
#import <AVFCore/AVMediaSelectionNilOption.h>
#import <AVFCore/AVFigObjectInspector.h>
#import <AVFCore/AVResult.h>
#import <AVFCore/AVFigRoutingContextOutputContextImpl.h>
#import <AVFCore/AVFigCommChannelUUIDCommunicationChannelManager.h>
#import <AVFCore/AVFigEndpointFigRoutingContextOutputDeviceTranslator.h>
#import <AVFCore/AVFigRouteDescriptorFigRoutingContextOutputDeviceTranslator.h>
#import <AVFCore/AVFigCommChannelUUIDOutputContextCommunicationChannelImpl.h>
#import <AVFCore/AVFigEndpointUIAgentOutputContextManagerImpl.h>
#import <AVFCore/AVAudioMixEffectParameters.h>
#import <AVFCore/AVAudioMixSweepFilterEffectParameters.h>
#import <AVFCore/AVAudioMixSweepFilterEffectParametersInternal.h>
#import <AVFCore/AVOutputDeviceInternal.h>
#import <AVFCore/AVOutputDevice.h>
#import <AVFCore/AVOutputDeviceFrecencyManager.h>
#import <AVFCore/AVOutputDeviceFrecentsReader.h>
#import <AVFCore/AVOutputDeviceFrecentsWriter.h>
#import <AVFCore/AVOutputDeviceLegacyFrecentsReader.h>
#import <AVFCore/AVOutputDeviceLegacyFrecentsWriter.h>
#import <AVFCore/AVOutputDeviceAuthorizedPeerInternal.h>
#import <AVFCore/AVOutputDeviceAuthorizedPeer.h>
#import <AVFCore/AVPairedDeviceInternal.h>
#import <AVFCore/AVPairedDevice.h>
#import <AVFCore/AVLocalOutputDeviceImpl.h>
#import <AVFCore/AVOutputDeviceCommunicationChannel.h>
#import <AVFCore/AVClusterComponentOutputDeviceDescription.h>
#import <AVFCore/AVCaptionPositionInternal.h>
#import <AVFCore/AVCaptionPosition.h>
#import <AVFCore/AVCaptionLengthInternal.h>
#import <AVFCore/AVCaptionLength.h>
#import <AVFCore/AVCaptionRegionInternal.h>
#import <AVFCore/AVCaptionRegion.h>
#import <AVFCore/AVMutableCaptionRegion.h>
#import <AVFCore/AVCaptionInternal.h>
#import <AVFCore/AVCaption.h>
#import <AVFCore/AVMutableCaption.h>
#import <AVFCore/AVCaptionRubyInternal.h>
#import <AVFCore/AVCaptionRuby.h>
#import <AVFCore/AVOutputSettings.h>
#import <AVFCore/AVFormatSpecification.h>
#import <AVFCore/AVSystemRemotePoolOutputDeviceCommunicationChannelManager.h>
#import <AVFCore/AVSystemRemotePoolOutputDeviceCommunicationChannelImpl.h>
#import <AVFCore/AVSampleBufferGeneratorInternal.h>
#import <AVFCore/AVSampleBufferGenerator.h>
#import <AVFCore/AVSampleBufferRequestInternal.h>
#import <AVFCore/AVSampleBufferRequest.h>
#import <AVFCore/AVWeakReferencingDelegateStorage.h>
#import <AVFCore/AVMediaFileType.h>
#import <AVFCore/AVMediaFileOutputSettingsValidator.h>
#import <AVFCore/AVWAVEOutputSettingsValidator.h>
#import <AVFCore/AVAIFFOutputSettingsValidator.h>
#import <AVFCore/AVAIFCOutputSettingsValidator.h>
#import <AVFCore/AVISOOutputSettingsValidator.h>
#import <AVFCore/AVGenericMediaFileOutputSettingsValidator.h>
#import <AVFCore/AVOperation.h>
#import <AVFCore/AVBlockOperation.h>
#import <AVFCore/AVGlobalOperationQueue.h>
#import <AVFCore/AVOperationQueueWithFundamentalDependency.h>
#import <AVFCore/AVDepartureAnnouncingObjectMonitor.h>
#import <AVFCore/AVWaitForNotificationOrDeallocationOperation.h>
#import <AVFCore/AVAudioOutputSettings.h>
#import <AVFCore/AVAVAudioSettingsAudioOutputSettings.h>
#import <AVFCore/AVRouteDetectorInternal.h>
#import <AVFCore/AVRouteDetector.h>
#import <AVFCore/AVVideoOutputSettings.h>
#import <AVFCore/AVPixelBufferAttributesVideoOutputSettings.h>
#import <AVFCore/AVAVVideoSettingsVideoOutputSettings.h>
#import <AVFCore/AVAudioSettingsValueConstrainer.h>
#import <AVFCore/AVFloat64Range.h>
#import <AVFCore/AVAggregateAssetDownloadTask.h>
#import <AVFCore/AVAssetDownloadSessionInternal.h>
#import <AVFCore/AVAssetDownloadSession.h>
#import <AVFCore/AVPlayerItemOutputInternal.h>
#import <AVFCore/AVPlayerItemOutput.h>
#import <AVFCore/AVPlayerItemVideoOutputInternal.h>
#import <AVFCore/AVPlayerItemVideoOutput.h>
#import <AVFCore/AVAssetCollectionInternal.h>
#import <AVFCore/AVAssetCollection.h>
#import <AVFCore/AVFigRemoteRouteDiscovererFactory.h>
#import <AVFCore/AVPlayerItemMediaDataCollectorInternal.h>
#import <AVFCore/AVPlayerItemMediaDataCollector.h>
#import <AVFCore/AVRoutingSessionManager.h>
#import <AVFCore/AVRoutingSession.h>
#import <AVFCore/AVRoutingSessionDestination.h>
#import <AVFCore/AVAssetCollectionFactory.h>
#import <AVFCore/AVSampleBufferDisplayLayerContentLayer.h>
#import <AVFCore/AVSampleBufferDisplayLayerInternal.h>
#import <AVFCore/AVSampleBufferDisplayLayer.h>
#import <AVFCore/AVAssetCollectionInspector.h>
#import <AVFCore/AVAssetDownloadStorageManager.h>
#import <AVFCore/AVAssetDownloadStorageManagementPolicy.h>
#import <AVFCore/AVMutableAssetDownloadStorageManagementPolicy.h>
#import <AVFCore/AVAssetDownloadStorageManagementPolicyInternal.h>
#import <AVFCore/AVAssetCollectionInspectorLoader.h>
#import <AVFCore/AVPixelBufferAttributeMediator.h>
#import <AVFCore/AVStreamDataAssetTrackInspector.h>
#import <AVFCore/AVStreamDataAssetInspector.h>
#import <AVFCore/AVStreamDataInspectionOnlyAsset.h>
#import <AVFCore/AVStreamDataAsset.h>
#import <AVFCore/AVAssetResourceLoaderRemoteHandlerContext.h>
#import <AVFCore/AVURLAuthenticationChallenge.h>
#import <AVFCore/AVAssetResourceLoaderInternal.h>
#import <AVFCore/AVAssetResourceLoader.h>
#import <AVFCore/AVAssetResourceLoadingContentInformationRequestInternal.h>
#import <AVFCore/AVAssetResourceLoadingContentInformationRequest.h>
#import <AVFCore/AVAssetResourceLoadingDataRequestInternal.h>
#import <AVFCore/AVAssetResourceLoadingDataRequest.h>
#import <AVFCore/AVAssetResourceLoadingRequestInternal.h>
#import <AVFCore/AVAssetResourceLoadingRequest.h>
#import <AVFCore/AVAssetResourceLoadingRequestorInternal.h>
#import <AVFCore/AVAssetResourceRenewalRequest.h>
#import <AVFCore/AVAssetResourceLoadingRequestor.h>
#import <AVFCore/AVTextStyleRuleInternal.h>
#import <AVFCore/AVTextStyleRule.h>
#import <AVFCore/AVAssetAnalysisReporter.h>
#import <AVFCore/AVAssetAnalysisMessage.h>
#import <AVFCore/AVMovieAtom.h>
#import <AVFCore/AVAssetAnalysisMovieParsingMessage.h>
#import <AVFCore/AVAssetAnalysisTextParsingMessage.h>
#import <AVFCore/AVPlayerMediaSelectionCriteria.h>
#import <AVFCore/AVPlayerItemMetadataOutputInternal.h>
#import <AVFCore/AVPlayerItemMetadataOutput.h>
#import <AVFCore/AVPlayerItemLegibleOutputRealDependencyFactory.h>
#import <AVFCore/AVPlayerItemLegibleOutputInternal.h>
#import <AVFCore/AVPlayerItemLegibleOutput.h>
#import <AVFCore/AVSegmentedMediaClosedCaptionReport.h>
#import <AVFCore/AVSegmentedMediaReport.h>
#import <AVFCore/AVMediaFileSegmenter.h>
#import <AVFCore/AVOutputSettingsAssistantInternal.h>
#import <AVFCore/AVOutputSettingsAssistant.h>
#import <AVFCore/AVExportSettingsOutputSettingsAssistantBaseSettings.h>
#import <AVFCore/AVExportSettingsOutputSettingsAssistantVideoSettingsAdjuster.h>
#import <AVFCore/AVIOKitOutputSettingsAssistantVideoEncoderCapabilities.h>
#import <AVFCore/AVCustomVideoCompositorSession.h>
#import <AVFCore/AVFragmentedAssetInternal.h>
#import <AVFCore/AVFragmentedAsset.h>
#import <AVFCore/AVFragmentedAssetMinderInternal.h>
#import <AVFCore/AVFragmentedAssetMinder.h>
#import <AVFCore/AVFragmentedAssetTrackInternal.h>
#import <AVFCore/AVFragmentedAssetTrack.h>
#import <AVFCore/AVScheduledAudioParametersInternal.h>
#import <AVFCore/AVScheduledAudioParameters.h>
#import <AVFCore/AVMutableScheduledAudioParameters.h>
#import <AVFCore/AVAsynchronousVideoCompositionRequestInternal.h>
#import <AVFCore/AVAsynchronousVideoCompositionRequest.h>
#import <AVFCore/AVVideoCompositionRenderContextInternal.h>
#import <AVFCore/AVVideoCompositionRenderContext.h>
#import <AVFCore/AVCaptionGrouper.h>
#import <AVFCore/AVVideoPerformanceMetricsInternal.h>
#import <AVFCore/AVVideoPerformanceMetrics.h>
#import <AVFCore/AVCaptionOutputSettings.h>
