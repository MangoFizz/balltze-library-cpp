// SPDX-License-Identifier: GPL-3.0-only

#ifndef BALLTZE_API__FEATURE_HPP
#define BALLTZE_API__FEATURE_HPP

#include <string>
#include <filesystem>
#include "engine/tag.hpp"
#include "api.hpp"

namespace Balltze::Features { 
    /**
     * Indexes a tag from another map to load it at the next map load
     * @param map_name    Name of the map to import the tag from
     * @param tag_path    Path of the tag to import
     * @param tag_class   Class of the tag to import
     */
    BALLTZE_API void import_tag_from_map(std::string map_name, std::string tag_path, Engine::TagClassInt tag_class);

    /**
     * Indexes a tag from another map to load it at the next map load
     * @param map_file    Path of the map to import the tag from
     * @param tag_path    Path of the tag to import
     * @param tag_class   Class of the tag to import
     */
    BALLTZE_API void import_tag_from_map(std::filesystem::path map_file, std::string tag_path, Engine::TagClassInt tag_class);

    /**
     * Indexes all tags from another map to load them at the next map load
     * @param map_name    Name of the map to import the tags from
     */
    BALLTZE_API void import_tags_from_map(std::filesystem::path map_file);

    /**
     * Reloads the data of a tag
     * @param tag_handle    Handle of the tag to reload
     */
    BALLTZE_API void reload_tag_data(Engine::TagHandle tag_handle);

    /**
     * Replace the dependencies of a tag
     * @param tag_handle    Handle of the tag to replace the dependencies of
     */
    BALLTZE_API void replace_tag_dependencies(Engine::TagHandle tag_handle, Engine::TagHandle new_tag_handle);
}

#endif
