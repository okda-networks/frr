
// SPDX-License-Identifier: GPL-2.0-or-later
/*
 * Copyright (C) 2024        Okda Networks
 *                           Amjad Daraiseh
 */

#ifndef OSPFD_OSFP_NB_H_
#define OSFPD_OSPF_NB_H_


extern const struct frr_yang_module_info frr_ospfd_info;

/* Mandatory callbacks. */
int lib_interface_ospf_instance_create(struct nb_cb_create_args *args);
int lib_interface_ospf_instance_destroy(struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_bfd_modify(struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_network_modify(struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_network_destroy(struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_area_modify(struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_area_destroy(struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_authentication_create(
	struct nb_cb_create_args *args);
int lib_interface_ospf_instance_authentication_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_authentication_message_digest_modify(
	struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_authentication_message_digest_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_authentication_null_modify(
	struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_authentication_null_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_message_digest_key_create(
	struct nb_cb_create_args *args);
int lib_interface_ospf_instance_message_digest_key_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_message_digest_key_mds_key_modify(
	struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_message_digest_key_mds_key_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_authentication_key_modify(
	struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_authentication_key_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_cost_modify(struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_cost_destroy(struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_dead_interval_interval_modify(
	struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_dead_interval_interval_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_dead_interval_minimal_hello_multiplier_modify(
	struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_dead_interval_minimal_hello_multiplier_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_hello_interval_modify(
	struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_hello_interval_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_retransmit_interval_modify(
	struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_retransmit_interval_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_transmit_delay_modify(
	struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_transmit_delay_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_mtu_ignore_modify(struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_mtu_ignore_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_priority_modify(struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_priority_destroy(struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_interface_address_create(
	struct nb_cb_create_args *args);
int lib_interface_ospf_instance_interface_address_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_interface_address_area_modify(
	struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_interface_address_area_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_interface_address_authentication_create(
	struct nb_cb_create_args *args);
int lib_interface_ospf_instance_interface_address_authentication_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_interface_address_authentication_message_digest_modify(
	struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_interface_address_authentication_message_digest_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_interface_address_authentication_null_modify(
	struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_interface_address_authentication_null_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_interface_address_message_digest_key_create(
	struct nb_cb_create_args *args);
int lib_interface_ospf_instance_interface_address_message_digest_key_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_interface_address_message_digest_key_mds_key_modify(
	struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_interface_address_message_digest_key_mds_key_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_interface_address_authentication_key_modify(
	struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_interface_address_authentication_key_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_interface_address_cost_modify(
	struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_interface_address_cost_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_interface_address_dead_interval_interval_modify(
	struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_interface_address_dead_interval_interval_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_interface_address_dead_interval_minimal_hello_multiplier_modify(
	struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_interface_address_dead_interval_minimal_hello_multiplier_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_interface_address_hello_interval_modify(
	struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_interface_address_hello_interval_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_interface_address_retransmit_interval_modify(
	struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_interface_address_retransmit_interval_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_interface_address_transmit_delay_modify(
	struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_interface_address_transmit_delay_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_interface_address_mtu_ignore_modify(
	struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_interface_address_mtu_ignore_destroy(
	struct nb_cb_destroy_args *args);
int lib_interface_ospf_instance_interface_address_priority_modify(
	struct nb_cb_modify_args *args);
int lib_interface_ospf_instance_interface_address_priority_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_auto_cost_reference_bandwidth_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_auto_cost_reference_bandwidth_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_use_arp_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_capability_opaque_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_compatible_rfc1583_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_compatible_rfc1583_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_default_metric_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_default_metric_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_write_multiplier_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_write_multiplier_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_router_info_as_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_router_info_as_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_router_info_area_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_router_info_area_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_default_information_originate_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_default_information_originate_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_default_information_always_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_default_information_always_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_default_information_metric_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_default_information_metric_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_default_information_metric_type_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_default_information_metric_type_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_default_information_route_map_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_default_information_route_map_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_redistribute_create(
	struct nb_cb_create_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_redistribute_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_redistribute_metric_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_redistribute_metric_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_redistribute_metric_type_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_redistribute_metric_type_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_redistribute_route_map_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_redistribute_route_map_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_distance_admin_value_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_distance_admin_value_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_distance_ospf_external_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_distance_ospf_external_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_distance_ospf_inter_area_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_distance_ospf_inter_area_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_distance_ospf_intra_area_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_distance_ospf_intra_area_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_distribute_list_dlist_create(
	struct nb_cb_create_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_distribute_list_dlist_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_max_metric_router_lsa_administrative_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_max_metric_router_lsa_administrative_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_max_metric_router_lsa_on_shutdown_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_max_metric_router_lsa_on_shutdown_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_max_metric_router_lsa_on_startup_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_max_metric_router_lsa_on_startup_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_mpls_te_on_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_mpls_te_on_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_mpls_te_router_address_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_mpls_te_router_address_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_mpls_te_inter_as_as_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_mpls_te_inter_as_as_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_mpls_te_inter_as_area_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_mpls_te_inter_as_area_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_ospf_abr_type_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_ospf_abr_type_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_ospf_opaque_lsa_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_ospf_opaque_lsa_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_ospf_rfc1583compatibility_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_ospf_rfc1583compatibility_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_ospf_router_id_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_ospf_router_id_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_ospf_write_multiplier_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_ospf_write_multiplier_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_timers_refresh_interval_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_timers_refresh_interval_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_timers_lsa_min_arrival_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_timers_lsa_min_arrival_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_timers_throttle_lsa_all_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_timers_throttle_lsa_all_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_timers_throttle_spf_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_timers_throttle_spf_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_global_block_lower_bound_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_global_block_upper_bound_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_srlb_lower_bound_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_srlb_upper_bound_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_node_msd_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_node_msd_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_on_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_on_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_prefix_sid_create(
	struct nb_cb_create_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_prefix_sid_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_prefix_sid_prefix_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_prefix_sid_prefix_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_segment_routing_prefix_sid_last_hop_behavior_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_neighbor_create(
	struct nb_cb_create_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_neighbor_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_neighbor_priority_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_neighbor_priority_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_neighbor_poll_interval_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_neighbor_poll_interval_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_network_create(
	struct nb_cb_create_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_network_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_network_area_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_network_area_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_passive_interface_create(
	struct nb_cb_create_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_passive_interface_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_passive_interface_address_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_passive_interface_address_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_create(
	struct nb_cb_create_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_authentication_create(
	struct nb_cb_create_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_authentication_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_authentication_message_digest_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_authentication_message_digest_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_default_cost_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_default_cost_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_export_list_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_export_list_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_import_list_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_import_list_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_filter_list_prefix_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_filter_list_prefix_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_filter_list_in_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_filter_list_in_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_filter_list_out_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_filter_list_out_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_nssa_create(
	struct nb_cb_create_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_nssa_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_nssa_no_summary_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_nssa_translate_always_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_nssa_translate_candidate_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_nssa_translate_never_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_ranges_range_create(
	struct nb_cb_create_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_ranges_range_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_ranges_range_advertise_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_ranges_range_advertise_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_ranges_range_not_advertise_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_ranges_range_cost_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_ranges_range_cost_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_ranges_range_substitute_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_ranges_range_substitute_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_stub_create(
	struct nb_cb_create_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_stub_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_stub_no_summary_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_shortcut_default_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_shortcut_disable_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_shortcut_disable_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_shortcut_enable_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_shortcut_enable_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_create(
	struct nb_cb_create_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_authentication_create(
	struct nb_cb_create_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_authentication_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_authentication_message_digest_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_authentication_message_digest_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_authentication_null_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_authentication_null_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_message_digest_key_create(
	struct nb_cb_create_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_message_digest_key_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_message_digest_key_mds_key_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_message_digest_key_mds_key_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_authentication_key_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_authentication_key_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_timers_dead_interval_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_timers_dead_interval_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_timers_hello_interval_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_timers_hello_interval_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_timers_retransmit_interval_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_timers_retransmit_interval_destroy(
	struct nb_cb_destroy_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_timers_transmit_delay_modify(
	struct nb_cb_modify_args *args);
int routing_control_plane_protocols_control_plane_protocol_ospf_areas_area_virtual_link_timers_transmit_delay_destroy(
	struct nb_cb_destroy_args *args);

#endif /* OSFPD_OSPF_NB_H_ */
